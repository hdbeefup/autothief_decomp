/*
 * AutoThief decomp - logging system
 *
 * Simple logging with categories and severity levels.
 * Original binary uses printf/OutputDebugString in various places;
 * this consolidates them into one system.
 */
#ifndef AUTOTHIEF_LOGGER_H
#define AUTOTHIEF_LOGGER_H

#include <stdio.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    LOG_DEBUG   = 0,
    LOG_INFO    = 1,
    LOG_WARN    = 2,
    LOG_ERROR   = 3,
    LOG_NONE    = 4,
} LogLevel;

/* Set minimum log level (default: LOG_INFO) */
void Log_SetLevel(LogLevel level);

/* Set log output file (default: stderr). Pass NULL for stderr. */
void Log_SetFile(FILE *f);

/* Core log function */
void Log_Write(LogLevel level, const char *category, const char *fmt, ...);

/* Convenience macros */
#define LOG_DEBUG(cat, ...) Log_Write(LOG_DEBUG, cat, __VA_ARGS__)
#define LOG_INFO(cat, ...)  Log_Write(LOG_INFO,  cat, __VA_ARGS__)
#define LOG_WARN(cat, ...)  Log_Write(LOG_WARN,  cat, __VA_ARGS__)
#define LOG_ERROR(cat, ...) Log_Write(LOG_ERROR, cat, __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* AUTOTHIEF_LOGGER_H */
