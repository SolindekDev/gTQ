#include <stdlib.h>
#include <stdio.h>

#pragma once

#include "messagebox.h"
#include "computer.h"
#include "time.h"

#if defined(_WIN32) || defined(_WIN64)
    #define _OSNAME "Windows"
    #include <windows.h>
#else
    #define _OSNAME "Else"
#endif




