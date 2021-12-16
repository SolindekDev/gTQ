#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <tchar.h>

#pragma once

#if defined(_WIN32) || defined(_WIN64)
    #define _OSNAME "Windows"
    #include <windows.h>
    #include <conio.h>
    #include <MMsystem.h>
#else
    #define _OSNAME "Else"
#endif

#pragma comment(lib, "user32.lib")
#pragma comment(lib,"winmm.lib")

/*
    Function to play beep sound!
*/
void beepPlay(int Pitch, int Duration) {
    Beep(Pitch, Duration);
}

/* 
    Function to play sound!

    !!! if this function do not play sound you must to add this flag in compilng procces -lwinmm
*/
int playSound(char* filenameToPlay) { 
    PlaySound(filenameToPlay, 0, 0);
}