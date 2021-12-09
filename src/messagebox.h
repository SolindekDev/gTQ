#include <stdlib.h>
#include <stdio.h>

#pragma once

#ifdef _WIN32
    #define _OSNAME "Windows"
    #include <windows.h>
    #include <tchar.h>
#elif _WIN64
    #define _OSNAME "Windows"
    #include <windows.h>
    #include <tchar.h>
#else
    #define _OSNAME "Else"
#endif

#define GTQ_OK                       0x00000000L
#define GTQ_OKCANCEL                 0x00000001L
#define GTQ_ABORTRETRYIGNORE         0x00000002L
#define GTQ_YESNOCANCEL              0x00000003L
#define GTQ_YESNO                    0x00000004L
#define GTQ_RETRYCANCEL              0x00000005L
#if(WINVER >= 0x0500)
    #define GTQ_CANCELTRYCONTINUE        0x00000006L
#endif
#define GTQ_ICONHAND                 0x00000010L
#define GTQ_ICONQUESTION             0x00000020L
#define GTQ_ICONEXCLAMATION          0x00000030L
#define GTQ_ICONASTERISK             0x00000040L
#if(WINVER >= 0x0400)
    #define GTQ_USERICON                 0x00000080L
    #define GTQ_ICONWARNING              GTQ_ICONEXCLAMATION
    #define GTQ_ICONERROR                GTQ_ICONHAND
#endif
#define GTQ_ICONINFORMATION          GTQ_ICONASTERISK
#define GTQ_ICONSTOP                 GTQ_ICONHAND
#define GTQ_DEFBUTTON1               0x00000000L
#define GTQ_DEFBUTTON2               0x00000100L
#define GTQ_DEFBUTTON3               0x00000200L
#if(WINVER >= 0x0400)
    #define GTQ_DEFBUTTON4               0x00000300L
#endif
#define GTQ_APPLMODAL                0x00000000L
#define GTQ_SYSTEMMODAL              0x00001000L
#define GTQ_TASKMODAL                0x00002000L
#if(WINVER >= 0x0400)
    #define GTQ_HELP                     0x00004000L
#endif
#define GTQ_NOFOCUS                  0x00008000L
#define GTQ_SETFOREGROUND            0x00010000L
#define GTQ_DEFAULT_DESKTOP_ONLY     0x00020000L

#if(WINVER >= 0x0400)
    #define GTQ_TOPMOST                  0x00040000L
    #define GTQ_RIGHT                    0x00080000L
    #define GTQ_RTLREADING               0x00100000L
#endif

static int consoleHide = 0;

void hideConsole() {
    consoleHide = 1;
    HWND window;
    AllocConsole();
    window = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(window, 0);

    return;
}

void showMessageBox(char* title, char* message, UINT typeGTQ) {
    if (consoleHide == 0) {
        hideConsole();
        MessageBox(FindWindowA("ConsoleWindowClass", NULL), message, title, typeGTQ);
    } else {
        MessageBox(FindWindowA("ConsoleWindowClass", NULL), message, title, typeGTQ);
    }
}