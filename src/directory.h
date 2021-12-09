#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <tchar.h>
#include <lmcons.h>

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
