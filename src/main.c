#include "messagebox.c"

#ifdef _WIN32
    #define _OSNAME "Windows"
    #include <windows.h>
#elif _WIN64
    #define _OSNAME "Windows"
    #include <windows.h>
#else
    #define _OSNAME "Else"
#endif


