#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <wchar.h>

#pragma once

#if defined(_WIN32) || defined(_WIN64)
    #define _OSNAME "Windows"
    #include <windows.h>
#else
    #define _OSNAME "Else"
#endif

#define GTQ_MEM_MB 0x0000020
#define GTQ_MEM_GB 0x0000021
#define GTQ_MEM_NC 0x0000022

struct GTQ_TIME {
    WORD hour; 
    WORD minute; 
    WORD seconds; 
    WORD day; 
    WORD dayOfWeek; 
    WORD milliseconds;
    WORD month; 
    WORD year; 
} GTQ_TIME;

struct GTQ_TIME getLocalTime() {
    SYSTEMTIME lt = {0};
    GetLocalTime(&lt);

    struct GTQ_TIME time;

    time.day = lt.wDay;
    time.dayOfWeek = lt.wDayOfWeek;
    time.hour = lt.wHour;
    time.minute = lt.wMinute;
    time.seconds = lt.wSecond;
    time.year = lt.wYear;
    time.month = lt.wMonth;
    time.milliseconds = lt.wMilliseconds;

    return time;
}

struct GTQ_TIME getUTCTime() {
    SYSTEMTIME lt = {0};
    GetSystemTime(&lt);

    struct GTQ_TIME time;
    
    time.day = lt.wDay;
    time.dayOfWeek = lt.wDayOfWeek;
    time.hour = lt.wHour;
    time.minute = lt.wMinute;
    time.seconds = lt.wSecond;
    time.year = lt.wYear;
    time.month = lt.wMonth;
    time.milliseconds = lt.wMilliseconds;

    return time;
}

