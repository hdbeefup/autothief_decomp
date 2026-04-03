/*
 * AutoThief decomp - logging system implementation
 */
#include "logger.h"

static LogLevel g_logLevel = LOG_INFO;
static FILE *g_logFile = NULL;

void Log_SetLevel(LogLevel level)
{
    g_logLevel = level;
}

void Log_SetFile(FILE *f)
{
    g_logFile = f;
}

void Log_Write(LogLevel level, const char *category, const char *fmt, ...)
{
    static const char *levelNames[] = { "DBG", "INF", "WRN", "ERR" };
    va_list args;
    FILE *out;

    if (level < g_logLevel)
        return;

    out = g_logFile ? g_logFile : stderr;

    fprintf(out, "[%s] %s: ", levelNames[level], category);
    va_start(args, fmt);
    vfprintf(out, fmt, args);
    va_end(args);
    fprintf(out, "\n");
    fflush(out);
}
