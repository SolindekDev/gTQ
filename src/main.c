#include <stdlib.h>
#include <stdio.h>

#pragma once

#include "messagebox.h"

#ifdef _WIN32
    #define _OSNAME "Windows"
    #include <windows.h>
#elif _WIN64
    #define _OSNAME "Windows"
    #include <windows.h>
#else
    #define _OSNAME "Else"
#endif


