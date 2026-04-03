/*
 * AutoThief decomp - PAK archive I/O implementation
 *
 * Matches the original engine's file loading behavior:
 *   - ROR-1 cipher on directory entries and file data
 *   - Multi-pak support (data.pak, data1..data9.pak)
 *   - Entry count stored as negative int32 at EOF-4
 *   - Directory table at EOF - count*144 - 4
 *   - Fallback to raw fopen for files not in pak
 *
 * Original: globals_00.c functions sub_40EF80, sub_40F000, sub_410060,
 *           sub_4103C0, sub_410660
 */
#include "pak_io.h"
#include "logger.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PAK_FILES   10
#define MAX_PAK_ENTRIES 8192

/* --- Internal types --- */

typedef struct {
    char  filename[PAK_FILENAME_SIZE];   /* normalized: lowercase, backslash, no .\ prefix */
    int   offset;                        /* file data offset within pak */
    int   size;                          /* file data size */
    int   unknown1;
    int   unknown2;
    FILE *pak_fp;                        /* which pak file contains this entry */
} PakEntry;

/* --- Global state (matches original engine globals) --- */

static int       g_pakLoaded = 0;               /* 0x5B5ED4 */
static PakEntry  g_pakEntries[MAX_PAK_ENTRIES];
static int       g_pakEntryCount = 0;
static FILE     *g_pakFiles[MAX_PAK_FILES];      /* open FILE* handles for each pak */
static int       g_pakFileCount = 0;

/* --- Cipher --- */

void Cipher_ROR1(unsigned char *buf, int len)
{
    int i;
    for (i = 0; i < len; i++)
        buf[i] = (buf[i] >> 1) | (buf[i] << 7);
}

void Cipher_ROL1(unsigned char *buf, int len)
{
    int i;
    for (i = 0; i < len; i++)
        buf[i] = (buf[i] << 1) | (buf[i] >> 7);
}

/* --- Path normalization (matches original engine) --- */

static void normalize_path(const char *src, char *dst, int dst_size)
{
    const char *p = src;
    int i;

    /* Strip .\ or ./ prefix */
    if (p[0] == '.' && (p[1] == '\\' || p[1] == '/'))
        p += 2;

    /* Copy, lowercase, normalize separators to backslash */
    for (i = 0; i < dst_size - 1 && p[i]; i++)
    {
        if (p[i] == '/')
            dst[i] = '\\';
        else
            dst[i] = (char)tolower((unsigned char)p[i]);
    }
    dst[i] = '\0';
}

/* --- Linear lookup (original uses std::map, we use linear scan for simplicity) --- */

static PakEntry *find_entry(const char *normalized_name)
{
    int i;
    for (i = 0; i < g_pakEntryCount; i++)
    {
        if (strcmp(g_pakEntries[i].filename, normalized_name) == 0)
            return &g_pakEntries[i];
    }
    return NULL;
}

/* --- PAK loading --- */

void PakArchive_Init(void)
{
    int pak_idx;
    char pak_path[260];

    if (g_pakLoaded)
        return;

    for (pak_idx = 0; pak_idx < MAX_PAK_FILES; pak_idx++)
    {
        FILE *fp;
        int file_size, entry_count, dir_offset;
        int i;
        unsigned char entry_buf[PAK_ENTRY_SIZE];

        if (pak_idx == 0)
            _snprintf(pak_path, sizeof(pak_path), "data.pak");
        else
            _snprintf(pak_path, sizeof(pak_path), "data%d.pak", pak_idx);

        fp = fopen(pak_path, "rb");
        if (!fp)
            continue;

        /* Get file size */
        fseek(fp, 0, SEEK_END);
        file_size = ftell(fp);

        /* Read entry count (stored as negative int32 at EOF-4) */
        fseek(fp, file_size - 4, SEEK_SET);
        fread(&entry_count, 1, 4, fp);
        entry_count = -entry_count;

        if (entry_count <= 0 || entry_count > MAX_PAK_ENTRIES - g_pakEntryCount)
        {
            LOG_WARN("PAK", "%s: invalid entry count %d", pak_path, entry_count);
            fclose(fp);
            continue;
        }

        /* Seek to directory start */
        dir_offset = file_size - (entry_count * PAK_ENTRY_SIZE) - 4;
        fseek(fp, dir_offset, SEEK_SET);

        LOG_INFO("PAK", "%s: %d entries (dir at 0x%X)", pak_path, entry_count, dir_offset);

        g_pakFiles[g_pakFileCount++] = fp;

        for (i = 0; i < entry_count; i++)
        {
            PakEntry *ent;
            char *name;
            int null_pos;

            if (fread(entry_buf, 1, PAK_ENTRY_SIZE, fp) < PAK_ENTRY_SIZE)
                break;

            /* Decrypt entry */
            Cipher_ROR1(entry_buf, PAK_ENTRY_SIZE);

            /* Parse filename */
            name = (char *)entry_buf;
            /* Null-terminate at first zero */
            for (null_pos = 0; null_pos < PAK_FILENAME_SIZE; null_pos++)
            {
                if (name[null_pos] == '\0')
                    break;
            }
            name[PAK_FILENAME_SIZE - 1] = '\0';

            ent = &g_pakEntries[g_pakEntryCount];

            /* Normalize filename */
            normalize_path(name, ent->filename, PAK_FILENAME_SIZE);

            /* Parse metadata at offset 0x80 */
            memcpy(&ent->offset,   entry_buf + PAK_FILENAME_SIZE,      4);
            memcpy(&ent->size,     entry_buf + PAK_FILENAME_SIZE + 4,  4);
            memcpy(&ent->unknown1, entry_buf + PAK_FILENAME_SIZE + 8,  4);
            memcpy(&ent->unknown2, entry_buf + PAK_FILENAME_SIZE + 12, 4);
            ent->pak_fp = fp;

            if (ent->filename[0])
                g_pakEntryCount++;
        }
    }

    g_pakLoaded = 1;
    LOG_INFO("PAK", "Loaded %d entries from %d pak file(s)", g_pakEntryCount, g_pakFileCount);
}

int PakArchive_LoadFile(const char *filename, void **out_data, int *out_size)
{
    char normalized[260];
    PakEntry *ent;
    void *buf;

    if (!g_pakLoaded)
        PakArchive_Init();

    normalize_path(filename, normalized, sizeof(normalized));

    ent = find_entry(normalized);
    if (!ent)
        return 0;

    /* Allocate buffer and read encrypted data */
    buf = malloc(ent->size);
    if (!buf)
    {
        LOG_ERROR("PAK", "Failed to allocate %d bytes for %s", ent->size, normalized);
        return 0;
    }

    fseek(ent->pak_fp, ent->offset, SEEK_SET);
    if ((int)fread(buf, 1, ent->size, ent->pak_fp) != ent->size)
    {
        LOG_ERROR("PAK", "Failed to read %d bytes for %s", ent->size, normalized);
        free(buf);
        return 0;
    }

    /* Decrypt */
    Cipher_ROR1((unsigned char *)buf, ent->size);

    *out_data = buf;
    *out_size = ent->size;

    LOG_DEBUG("PAK", "Loaded %s (%d bytes)", normalized, ent->size);
    return 1;
}

int FileIO_LoadWithFallback(const char *filename, void **out_data, int *out_size)
{
    FILE *fp;
    int file_size;
    void *buf;

    /* Try PAK first */
    if (PakArchive_LoadFile(filename, out_data, out_size))
        return 1;

    /* TODO: ZIP fallback (data.zip via minizip) - not yet implemented */

    /* Raw fopen fallback */
    fp = fopen(filename, "rb");
    if (!fp)
        return 0;

    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    buf = malloc(file_size);
    if (!buf)
    {
        fclose(fp);
        return 0;
    }

    fread(buf, 1, file_size, fp);
    fclose(fp);

    *out_data = buf;
    *out_size = file_size;

    LOG_DEBUG("PAK", "Loaded %s via fopen (%d bytes)", filename, file_size);
    return 1;
}

/* --- FileHandle API --- */

FileHandle *FileIO_Open(const char *filename, const char *mode)
{
    FileHandle *fh;

    fh = (FileHandle *)calloc(1, sizeof(FileHandle));
    if (!fh)
        return NULL;

    /* Write mode: always use raw fopen */
    if (mode[0] == 'w' || mode[0] == 'W')
    {
        fh->fp = fopen(filename, mode);
        if (!fh->fp)
        {
            free(fh);
            return NULL;
        }
        return fh;
    }

    /* Read mode: try raw fopen first (for local overrides) */
    fh->fp = fopen(filename, mode);
    if (fh->fp)
        return fh;

    /* Fallback to pak/zip */
    if (FileIO_LoadWithFallback(filename, &fh->data, &fh->size))
    {
        fh->pos = 0;
        fh->fp = NULL;
        return fh;
    }

    free(fh);
    return NULL;
}

int FileIO_Read(void *dest, int elem_size, int count, FileHandle *fh)
{
    int total, available, readable;

    if (!fh)
        return 0;

    /* FILE* mode: delegate to fread */
    if (fh->fp)
        return (int)fread(dest, elem_size, count, fh->fp);

    /* Buffer mode */
    if (!fh->data)
        return 0;

    total = elem_size * count;
    if (total <= 0 || count <= 0)
        return 0;

    available = fh->size - fh->pos;
    if (available <= 0)
        return 0;

    /* Clamp to available data, round down to whole elements */
    if (total > available)
        total = available;
    readable = (total / elem_size) * elem_size;
    if (readable <= 0)
        return 0;

    memcpy(dest, (unsigned char *)fh->data + fh->pos, readable);
    fh->pos += readable;

    return readable / elem_size;
}

void FileIO_Close(FileHandle *fh)
{
    if (!fh)
        return;

    if (fh->fp)
        fclose(fh->fp);
    if (fh->data)
        free(fh->data);
    free(fh);
}

void PakArchive_Shutdown(void)
{
    int i;
    for (i = 0; i < g_pakFileCount; i++)
    {
        if (g_pakFiles[i])
            fclose(g_pakFiles[i]);
        g_pakFiles[i] = NULL;
    }
    g_pakFileCount = 0;
    g_pakEntryCount = 0;
    g_pakLoaded = 0;
}
