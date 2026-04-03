/*
 * AutoThief decomp - PAK archive I/O
 *
 * Implements the game's file I/O layer:
 *   1. Try data.pak / data1.pak .. data9.pak (ROR-1 encrypted archives)
 *   2. Fallback to data.zip (standard zip)
 *   3. Fallback to raw fopen
 *
 * Original functions:
 *   0x0040EF80 - Cipher_ROR1
 *   0x0040F000 - FileIO_Read
 *   0x00410060 - PakArchive_LoadAndLookup
 *   0x004103C0 - FileIO_ZipFallback
 *   0x00410660 - FileIO_Open
 *
 * See: docs/PAK_FORMAT.md
 */
#ifndef AUTOTHIEF_PAK_IO_H
#define AUTOTHIEF_PAK_IO_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* File handle returned by FileIO_Open.
 * Either wraps a FILE* (for raw/write mode) or a decrypted memory buffer
 * (for pak/zip reads). Original struct at 16 bytes. */
typedef struct {
    void  *data;       /* +0x00: decrypted file data buffer (malloc'd) */
    int    pos;        /* +0x04: current read position in buffer */
    int    size;       /* +0x08: total buffer size */
    FILE  *fp;         /* +0x0C: FILE* for raw/write mode (NULL if using buffer) */
} FileHandle;

#define PAK_ENTRY_SIZE     144
#define PAK_FILENAME_SIZE  128

/* ROR-1 cipher: rotate each byte right by 1 bit, in-place.
 * Original: sub_40EF80 */
void Cipher_ROR1(unsigned char *buf, int len);

/* ROL-1 cipher: rotate each byte left by 1 bit (inverse of ROR-1). */
void Cipher_ROL1(unsigned char *buf, int len);

/* Initialize the PAK archive system.
 * Loads directory tables from data.pak, data1.pak .. data9.pak.
 * Called automatically on first file access. */
void PakArchive_Init(void);

/* Look up a file in the loaded PAK archives.
 * Allocates and returns decrypted file data.
 * Returns 1 on success, 0 if not found.
 * Original: sub_410060 */
int PakArchive_LoadFile(const char *filename, void **out_data, int *out_size);

/* Load a file with PAK -> ZIP -> fopen fallback chain.
 * Returns 1 on success.
 * Original: sub_4103C0 */
int FileIO_LoadWithFallback(const char *filename, void **out_data, int *out_size);

/* Open a file for reading or writing.
 * For read mode ("rb"): tries pak, zip, then raw fopen.
 * For write mode ("wb"/"w"): uses raw fopen directly.
 * Returns FileHandle* on success, NULL on failure.
 * Caller must close with FileIO_Close.
 * Original: sub_410660 */
FileHandle *FileIO_Open(const char *filename, const char *mode);

/* Read from a FileHandle (works like fread).
 * Original: sub_40F000 */
int FileIO_Read(void *dest, int elem_size, int count, FileHandle *fh);

/* Close a FileHandle and free resources. */
void FileIO_Close(FileHandle *fh);

/* Shut down PAK system and free all cached directory data. */
void PakArchive_Shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* AUTOTHIEF_PAK_IO_H */
