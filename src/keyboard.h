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

/*
    Everything under it is from WinUser.h
*/
#define KEY_BACK           0x08
#define KEY_TAB            0x09
#define KEY_CLEAR          0x0C
#define KEY_RETURN         0x0D
#define KEY_SHIFT          0x10
#define KEY_CONTROL        0x11
#define KEY_MENU           0x12
#define KEY_PAUSE          0x13
#define KEY_CAPITAL        0x14
#define KEY_KANA           0x15
#define KEY_HANGEUL        0x15  
#define KEY_HANGUL         0x15
#define KEY_JUNJA          0x17
#define KEY_FINAL          0x18
#define KEY_HANJA          0x19
#define KEY_KANJI          0x19
#define KEY_ESCAPE         0x1B
#define KEY_CONVERT        0x1C
#define KEY_NONCONVERT     0x1D
#define KEY_ACCEPT         0x1E
#define KEY_MODECHANGE     0x1F
#define KEY_SPACE          0x20
#define KEY_PRIOR          0x21
#define KEY_NEXT           0x22
#define KEY_END            0x23
#define KEY_HOME           0x24
#define KEY_LEFT           0x25
#define KEY_UP             0x26
#define KEY_RIGHT          0x27
#define KEY_DOWN           0x28
#define KEY_SELECT         0x29
#define KEY_PRINT          0x2A
#define KEY_EXECUTE        0x2B
#define KEY_SNAPSHOT       0x2C
#define KEY_INSERT         0x2D
#define KEY_DELETE         0x2E
#define KEY_HELP           0x2F
#define KEY_LWIN           0x5B
#define KEY_RWIN           0x5C
#define KEY_APPS           0x5D
#define KEY_SLEEP          0x5F
#define KEY_NUMPAD0        0x60
#define KEY_NUMPAD1        0x61
#define KEY_NUMPAD2        0x62
#define KEY_NUMPAD3        0x63
#define KEY_NUMPAD4        0x64
#define KEY_NUMPAD5        0x65
#define KEY_NUMPAD6        0x66
#define KEY_NUMPAD7        0x67
#define KEY_NUMPAD8        0x68
#define KEY_NUMPAD9        0x69
#define KEY_MULTIPLY       0x6A
#define KEY_ADD            0x6B
#define KEY_SEPARATOR      0x6C
#define KEY_SUBTRACT       0x6D
#define KEY_DECIMAL        0x6E
#define KEY_DIVIDE         0x6F
#define KEY_F1             0x70
#define KEY_F2             0x71
#define KEY_F3             0x72
#define KEY_F4             0x73
#define KEY_F5             0x74
#define KEY_F6             0x75
#define KEY_F7             0x76
#define KEY_F8             0x77
#define KEY_F9             0x78
#define KEY_F10            0x79
#define KEY_F11            0x7A
#define KEY_F12            0x7B
#define KEY_F13            0x7C
#define KEY_F14            0x7D
#define KEY_F15            0x7E
#define KEY_F16            0x7F
#define KEY_F17            0x80
#define KEY_F18            0x81
#define KEY_F19            0x82
#define KEY_F20            0x83
#define KEY_F21            0x84
#define KEY_F22            0x85
#define KEY_F23            0x86
#define KEY_F24            0x87
#if(_WIN32_WINNT >= 0x0604)
    #define KEY_NAVIGATION_VIEW     0x88 
    #define KEY_NAVIGATION_MENU     0x89 
    #define KEY_NAVIGATION_UP       0x8A 
    #define KEY_NAVIGATION_DOWN     0x8B 
    #define KEY_NAVIGATION_LEFT     0x8C 
    #define KEY_NAVIGATION_RIGHT    0x8D 
    #define KEY_NAVIGATION_ACCEPT   0x8E 
    #define KEY_NAVIGATION_CANCEL   0x8F 
#endif
#define KEY_NUMLOCK        0x90
#define KEY_SCROLL         0x91
#define KEY_OEM_NEC_EQUAL  0x92
#define KEY_OEM_FJ_JISHO   0x92  
#define KEY_OEM_FJ_MASSHOU 0x93  
#define KEY_OEM_FJ_TOUROKU 0x94  
#define KEY_OEM_FJ_LOYA    0x95 
#define KEY_OEM_FJ_ROYA    0x96  
#define KEY_LSHIFT         0xA0
#define KEY_RSHIFT         0xA1
#define KEY_LCONTROL       0xA2
#define KEY_RCONTROL       0xA3
#define KEY_LMENU          0xA4
#define KEY_RMENU          0xA5
#if(_WIN32_WINNT >= 0x0500)
    #define KEY_BROWSER_BACK        0xA6
    #define KEY_BROWSER_FORWARD     0xA7
    #define KEY_BROWSER_REFRESH     0xA8
    #define KEY_BROWSER_STOP        0xA9
    #define KEY_BROWSER_SEARCH      0xAA
    #define KEY_BROWSER_FAVORITES   0xAB
    #define KEY_BROWSER_HOME        0xAC
    #define KEY_VOLUME_MUTE         0xAD
    #define KEY_VOLUME_DOWN         0xAE
    #define KEY_VOLUME_UP           0xAF
    #define KEY_MEDIA_NEXT_TRACK    0xB0
    #define KEY_MEDIA_PREV_TRACK    0xB1
    #define KEY_MEDIA_STOP          0xB2
    #define KEY_MEDIA_PLAY_PAUSE    0xB3
    #define KEY_LAUNCH_MAIL         0xB4
    #define KEY_LAUNCH_MEDIA_SELECT 0xB5
    #define KEY_LAUNCH_APP1         0xB6
    #define KEY_LAUNCH_APP2         0xB7
#endif
#define KEY_OEM_1          0xBA   
#define KEY_OEM_PLUS       0xBB 
#define KEY_OEM_COMMA      0xBC   
#define KEY_OEM_MINUS      0xBD  
#define KEY_OEM_PERIOD     0xBE
#define KEY_OEM_2          0xBF
#define KEY_OEM_3          0xC0
#if(_WIN32_WINNT >= 0x0604)
    #define KEY_GAMEPAD_A                         0xC3 
    #define KEY_GAMEPAD_B                         0xC4 
    #define KEY_GAMEPAD_X                         0xC5 
    #define KEY_GAMEPAD_Y                         0xC6 
    #define KEY_GAMEPAD_RIGHT_SHOULDER            0xC7 
    #define KEY_GAMEPAD_LEFT_SHOULDER             0xC8 
    #define KEY_GAMEPAD_LEFT_TRIGGER              0xC9 
    #define KEY_GAMEPAD_RIGHT_TRIGGER             0xCA 
    #define KEY_GAMEPAD_DPAD_UP                   0xCB 
    #define KEY_GAMEPAD_DPAD_DOWN                 0xCC 
    #define KEY_GAMEPAD_DPAD_LEFT                 0xCD 
    #define KEY_GAMEPAD_DPAD_RIGHT                0xCE 
    #define KEY_GAMEPAD_MENU                      0xCF 
    #define KEY_GAMEPAD_VIEW                      0xD0 
    #define KEY_GAMEPAD_LEFT_THUMBSTICK_BUTTON    0xD1 
    #define KEY_GAMEPAD_RIGHT_THUMBSTICK_BUTTON   0xD2 
    #define KEY_GAMEPAD_LEFT_THUMBSTICK_UP        0xD3 
    #define KEY_GAMEPAD_LEFT_THUMBSTICK_DOWN      0xD4 
    #define KEY_GAMEPAD_LEFT_THUMBSTICK_RIGHT     0xD5 
    #define KEY_GAMEPAD_LEFT_THUMBSTICK_LEFT      0xD6 
    #define KEY_GAMEPAD_RIGHT_THUMBSTICK_UP       0xD7 
    #define KEY_GAMEPAD_RIGHT_THUMBSTICK_DOWN     0xD8 
    #define KEY_GAMEPAD_RIGHT_THUMBSTICK_RIGHT    0xD9 
    #define KEY_GAMEPAD_RIGHT_THUMBSTICK_LEFT     0xDA 
#endif
#define KEY_OEM_4          0xDB
#define KEY_OEM_5          0xDC 
#define KEY_OEM_6          0xDD 
#define KEY_OEM_7          0xDE 
#define KEY_OEM_8          0xDF
#define KEY_OEM_AX         0xE1
#define KEY_OEM_102        0xE2
#define KEY_ICO_HELP       0xE3
#define KEY_ICO_00         0xE4 
#if(WINVER >= 0x0400)
    #define KEY_PROCESSKEY     0xE5
#endif
#define KEY_ICO_CLEAR      0xE6
#if(_WIN32_WINNT >= 0x0500)
    #define KEY_PACKET         0xE7
#endif
#define KEY_OEM_RESET      0xE9
#define KEY_OEM_JUMP       0xEA
#define KEY_OEM_PA1        0xEB
#define KEY_OEM_PA2        0xEC
#define KEY_OEM_PA3        0xED
#define KEY_OEM_WSCTRL     0xEE
#define KEY_OEM_CUSEL      0xEF
#define KEY_OEM_ATTN       0xF0
#define KEY_OEM_FINISH     0xF1
#define KEY_OEM_COPY       0xF2
#define KEY_OEM_AUTO       0xF3
#define KEY_OEM_ENLW       0xF4
#define KEY_OEM_BACKTAB    0xF5
#define KEY_ATTN           0xF6
#define KEY_CRSEL          0xF7
#define KEY_EXSEL          0xF8
#define KEY_EREOF          0xF9
#define KEY_PLAY           0xFA
#define KEY_ZOOM           0xFB
#define KEY_NONAME         0xFC
#define KEY_PA1            0xFD
#define KEY_OEM_CLEAR      0xFE

#define KEY_CLICKED        0x1A
#define KEY_UP             0x1B

int keyGet(UINT key) {
    short ks = GetKeyState(key);
    
    if (ks < 0) {
        // Clicked
        return KEY_CLICKED;
    } else {
        // Up
        return KEY_UP;
    }
}