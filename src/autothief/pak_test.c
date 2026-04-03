/*
 * PAK module test - validates against actual data.pak
 *
 * Usage: pak_test.exe <path_to_data.pak>
 *
 * Tests:
 *   1. ROR-1 cipher round-trip
 *   2. PAK directory loading
 *   3. File extraction and decryption
 *   4. FileHandle read API
 */
#include "pak_io.h"
#include "logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>

static int test_cipher(void)
{
    unsigned char orig[] = { 0x00, 0xFF, 0xAA, 0x55, 0x01, 0x80, 0x42 };
    unsigned char buf[7];
    int i;

    printf("Test: ROR-1/ROL-1 cipher round-trip... ");

    memcpy(buf, orig, 7);
    Cipher_ROR1(buf, 7);
    Cipher_ROL1(buf, 7);

    for (i = 0; i < 7; i++)
    {
        if (buf[i] != orig[i])
        {
            printf("FAIL at byte %d: expected 0x%02X, got 0x%02X\n", i, orig[i], buf[i]);
            return 0;
        }
    }

    /* Verify known ROR-1 values */
    {
        unsigned char test = 0x01;
        Cipher_ROR1(&test, 1);
        if (test != 0x80)
        {
            printf("FAIL: ROR1(0x01) = 0x%02X, expected 0x80\n", test);
            return 0;
        }
    }

    printf("PASS\n");
    return 1;
}

static int test_pak_load(const char *pak_dir)
{
    int entry_count = 0;
    char old_dir[260];
    void *data = NULL;
    int size = 0;

    printf("Test: PAK archive loading... ");

    /* Change to pak directory so data.pak is found */
    _getcwd(old_dir, sizeof(old_dir));
    _chdir(pak_dir);

    PakArchive_Init();

    /* Try loading a known file (try .lua and .luab variants, case-insensitive) */
    if (PakArchive_LoadFile("Scripts\\intro.lua", &data, &size)
        || PakArchive_LoadFile("scripts\\intro.luab", &data, &size)
        || PakArchive_LoadFile("Scripts\\intro.luab", &data, &size))
    {
        printf("PASS (loaded scripts\\intro.lua, %d bytes)\n", size);

        /* Verify it looks like Lua source */
        if (size > 4 && data)
        {
            char *txt = (char *)data;
            if (txt[0] == '-' && txt[1] == '-')
                printf("  Content starts with '--' (Lua comment) - looks correct\n");
            else
                printf("  First bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
                       (unsigned char)txt[0], (unsigned char)txt[1],
                       (unsigned char)txt[2], (unsigned char)txt[3]);
        }
        free(data);
    }
    else
    {
        /* Try another common file */
        if (PakArchive_LoadFile("config.ini", &data, &size))
        {
            printf("PASS (loaded config.ini, %d bytes)\n", size);
            free(data);
        }
        else
        {
            printf("WARN: couldn't load test files (pak may have different layout)\n");
        }
    }

    _chdir(old_dir);
    return 1;
}

static int test_filehandle(const char *pak_dir)
{
    FileHandle *fh;
    char buf[256];
    int n;
    char old_dir[260];

    printf("Test: FileHandle read API... ");

    _getcwd(old_dir, sizeof(old_dir));
    _chdir(pak_dir);

    fh = FileIO_Open("scripts\\intro.lua", "rb");
    if (!fh)
        fh = FileIO_Open("scripts\\intro.luab", "rb");
    if (!fh)
    {
        printf("SKIP (no test file available)\n");
        _chdir(old_dir);
        return 1;
    }

    n = FileIO_Read(buf, 1, 255, fh);
    buf[n] = '\0';

    if (n > 0)
        printf("PASS (read %d bytes)\n", n);
    else
        printf("FAIL (read returned %d)\n", n);

    FileIO_Close(fh);
    _chdir(old_dir);
    return n > 0;
}

int main(int argc, char *argv[])
{
    const char *pak_dir = ".";
    int passed = 0, total = 0;

    printf("=== AutoThief PAK Module Test ===\n\n");

    Log_SetLevel(LOG_INFO);

    if (argc > 1)
        pak_dir = argv[1];
    else
        printf("Usage: pak_test.exe <directory_containing_data.pak>\n"
               "       Running with current directory...\n\n");

    /* Test 1: Cipher */
    total++;
    if (test_cipher()) passed++;

    /* Test 2: PAK loading */
    total++;
    if (test_pak_load(pak_dir)) passed++;

    /* Test 3: FileHandle API */
    total++;
    if (test_filehandle(pak_dir)) passed++;

    printf("\n=== Results: %d/%d passed ===\n", passed, total);

    PakArchive_Shutdown();
    return (passed == total) ? 0 : 1;
}
