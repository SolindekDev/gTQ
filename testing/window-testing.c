    // #include "stdafx.h"  
#include <windows.h>
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);  
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)  
{  
    TCHAR appname[] = TEXT("Key Events");  
    MSG msg;  
    HWND hwnd;  
    WNDCLASS wndclass;  
    wndclass.cbClsExtra = 0;  
    wndclass.cbWndExtra = 0;  
    wndclass.hbrBackground = (HBRUSH) GetStockObject(WHITE_BRUSH);  
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);  
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);  
    wndclass.hInstance = hInstance;  
    wndclass.lpfnWndProc = WndProc;  
    wndclass.lpszClassName = appname;  
    wndclass.lpszMenuName = NULL;  
    wndclass.style = CS_HREDRAW | CS_VREDRAW;  
    if (!RegisterClass( & wndclass))  
    {  
        MessageBox(NULL, TEXT("Class not registered"), TEXT("Error...."), MB_OK);  
    }  
    hwnd = CreateWindow(appname,  
            appname,  
            WS_OVERLAPPEDWINDOW,  
            100,  
            100,  
            CW_USEDEFAULT,  
            CW_USEDEFAULT,  
            NULL,  
            NULL,  
            hInstance,  
            NULL);  
    ShowWindow(hwnd, iCmdShow);  
    UpdateWindow(hwnd);  
    while (GetMessage( & msg, NULL, 0, 0))  
    {  
        TranslateMessage( & msg);  
            DispatchMessage( & msg);  
    }  
    return msg.wParam;  
}  
    