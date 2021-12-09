#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <tchar.h>
#include <lmcons.h>
#include <VersionHelpers.h>

#pragma once

#if defined(_WIN32) || defined(_WIN64)
    #define _OSNAME "Windows"
    #include <windows.h>
#else
    #define _OSNAME "Else"
#endif

#pragma comment(lib, "user32.lib")

/*
    Function return a Width of monitor
*/
int systemWidthSize() {
    int x = GetSystemMetrics(SM_CXSCREEN);

    return x;
}

/*
    Function return a height of monitor
*/
int systemHeightSize() {
    int y = GetSystemMetrics(SM_CYSCREEN);

    return y;
}

/*
    Function lock the work station
*/
void workStationLock() {
    int w = LockWorkStation();

    if (w == 0) {
        printf("Work station lock failed\nerror: %d\n", GetLastError());
    }
}

/*
    Function show the computer name
    
    to print it you must to write something like this:
    printf(L"Computer name: %ls\n", computerName());
*/
wchar_t* computerName() {
    wchar_t* computerName = malloc(sizeof(wchar_t)*100);
    // wchar_t computerName[MAX_COMPUTERNAME_LENGTH + 1] = malloc(sizeof(wchar_t)*100);
    DWORD size = sizeof(computerName) / sizeof(computerName[0]);

    int r = GetComputerNameW(computerName, &size);

    if (r == 0) {
        printf("Failed to get the computer name!");
        return L"Err";
    }

    return computerName;
}

/*
    Function show the username of computer 

    not working for now ;(
*/
// wchar_t* usernameGet() {
//     wchar_t username = malloc(sizeof(wchar_t)*100);
//     DWORD len = sizeof(username) / sizeof(wchar_t);

//     int r = GetUserNameW(username, &len);

//     if (r == 0) {
//         wprintf(L"Failed to get username %ld", GetLastError());
//     }
  
//     return username;
// }

/* 
    Function return the windows system version 

    1 - Windows 10+
    2 - Windows 8.1+
    3 - Windows 8
    4 - Windows 7
    5 - Windows Vista
    6 - Windows XP
*/
int GetWindowsVersion() {
    if (IsWindows10OrGreater()) {
        return 1;
    } else if (IsWindows8Point1OrGreater()) {
        return 2;
    } else if (IsWindows8OrGreater()) {
        return 3;
    } else if (IsWindows7OrGreater ()) {
        return 4;
    } else if (IsWindowsVistaOrGreater ()) {
        return 5;
    } else if (IsWindowsXPOrGreater()) {
        return 6;
    }
}

/*
    Shows memory use in percentage
*/
int memoryUsePercentage() {
    MEMORYSTATUSEX mem = {0};

    mem.dwLength = sizeof(mem);

    int r = GlobalMemoryStatusEx(&mem);

    if (r == 0) {
        wprintf(L"Failed to memory status %ld", GetLastError());
        return 1;
    }
    
    return mem.dwMemoryLoad;
}

/*
    Shows total physical memory
*/
int memoryTotalPhys() {
    MEMORYSTATUSEX mem = {0};

    mem.dwLength = sizeof(mem);

    int r = GlobalMemoryStatusEx(&mem);

    if (r == 0) {
        wprintf(L"Failed to memory status %ld", GetLastError());
        return 1;
    }
    
    return mem.ullTotalPhys;
}

/*
    Shows free physical memory
*/
int memoryFreePhys() {
    MEMORYSTATUSEX mem = {0};

    mem.dwLength = sizeof(mem);

    int r = GlobalMemoryStatusEx(&mem);

    if (r == 0) {
        wprintf(L"Failed to memory status %ld", GetLastError());
        return 1;
    }
    
    return mem.ullAvailPhys;
}

/*
    Shows total virutal memory
*/
int memoryTotalVirutal() {
    MEMORYSTATUSEX mem = {0};

    mem.dwLength = sizeof(mem);

    int r = GlobalMemoryStatusEx(&mem);

    if (r == 0) {
        wprintf(L"Failed to memory status %ld", GetLastError());
        return 1;
    }
    
    return mem.ullTotalVirtual;
}

/*
    Shows free virutal memory
*/
int memoryFreeVirutal() {
    MEMORYSTATUSEX mem = {0};

    mem.dwLength = sizeof(mem);

    int r = GlobalMemoryStatusEx(&mem);

    if (r == 0) {
        wprintf(L"Failed to memory status %ld", GetLastError());
        return 1;
    }
    
    return mem.ullAvailVirtual;
}