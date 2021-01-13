#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h> //I AM NOOOOB

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_3DFACE;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Can you please work properly"),       /* Title Text */
           WS_SYSMENU, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           500,                 /* The programs width */
           400,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}

#define ID_BTNONE 1
#define ID_BTNTWO 2
#define ID_BTNTHREE 3
#define ID_BTNFOUR 4
#define ID_BTNFIVE 5
#define ID_BTNSIX 6
#define ID_BTNSEVEN 7
#define ID_BTNEIGHT 8
#define ID_BTNNINE 9
#define ID_BTNZERO 0
#define ID_BTNCOMMA 10
#define ID_BTNPLUS 11
#define ID_BTNMINUS 12
#define ID_BTNMULTIPLY 13
#define ID_BTNDIVIDE 14
#define ID_BTNERASE 15
#define ID_BTNEQUAL 16


static HWND hwndTextbox;
static HWND hwndButtonOne;
static HWND hwndButtonTwo;
static HWND hwndButtonThree;
static HWND hwndButtonFour;
static HWND hwndButtonFive;
static HWND hwndButtonSix;
static HWND hwndButtonSeven;
static HWND hwndButtonEight;
static HWND hwndButtonNine;
static HWND hwndButtonZero;
static HWND hwndButtonComma;
static HWND hwndButtonPlus;
static HWND hwndButtonMinus;
static HWND hwndButtonMultiply;
static HWND hwndButtonDivide;
static HWND hwndButtonErase;
static HWND hwndButtonEqual;

/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {

        case WM_CREATE: {

            hwndTextbox = CreateWindowW(L"STATIC", L"", WS_VISIBLE | WS_CHILD| ES_AUTOHSCROLL, 10, 10, 470, 40, hwnd, (HMENU) NULL, NULL, NULL);

            hwndButtonOne = CreateWindowW(L"button", L"1", WS_VISIBLE | WS_CHILD, 10, 200, 94, 75, hwnd, (HMENU) ID_BTNONE, NULL, NULL);
            hwndButtonTwo = CreateWindowW(L"button", L"2", WS_VISIBLE | WS_CHILD, 104, 200, 94, 75, hwnd, (HMENU) ID_BTNTWO, NULL, NULL);
            hwndButtonThree = CreateWindowW(L"button", L"3", WS_VISIBLE | WS_CHILD, 198, 200, 94, 75, hwnd, (HMENU) ID_BTNTHREE, NULL, NULL);
            hwndButtonFour = CreateWindowW(L"button", L"4", WS_VISIBLE | WS_CHILD, 10, 125, 94, 75, hwnd, (HMENU) ID_BTNFOUR, NULL, NULL);
            hwndButtonFive = CreateWindowW(L"button", L"5", WS_VISIBLE | WS_CHILD, 104, 125, 94, 75, hwnd, (HMENU) ID_BTNFIVE, NULL, NULL);
            hwndButtonSix = CreateWindowW(L"button", L"6", WS_VISIBLE | WS_CHILD, 198, 125, 94, 75, hwnd, (HMENU) ID_BTNSIX, NULL, NULL);
            hwndButtonSeven = CreateWindowW(L"button", L"7", WS_VISIBLE | WS_CHILD, 10, 50, 94, 75, hwnd, (HMENU) ID_BTNSEVEN, NULL, NULL);
            hwndButtonEight = CreateWindowW(L"button", L"8", WS_VISIBLE | WS_CHILD, 104, 50, 94, 75, hwnd, (HMENU) ID_BTNEIGHT, NULL, NULL);
            hwndButtonNine = CreateWindowW(L"button", L"9", WS_VISIBLE | WS_CHILD, 198, 50, 94, 75, hwnd, (HMENU) ID_BTNNINE, NULL, NULL);
            hwndButtonZero = CreateWindowW(L"button", L"0", WS_VISIBLE | WS_CHILD, 10, 275, 94, 75, hwnd, (HMENU) ID_BTNZERO, NULL, NULL);
            hwndButtonComma = CreateWindowW(L"button", L".", WS_VISIBLE | WS_CHILD, 104, 275, 94, 75, hwnd, (HMENU) ID_BTNCOMMA, NULL, NULL);
            hwndButtonPlus = CreateWindowW(L"button", L"+", WS_VISIBLE | WS_CHILD, 292, 50, 94, 75, hwnd, (HMENU) ID_BTNPLUS, NULL, NULL);
            hwndButtonMinus = CreateWindowW(L"button", L"-", WS_VISIBLE | WS_CHILD, 292, 125, 94, 75, hwnd, (HMENU) ID_BTNMINUS, NULL, NULL);
            hwndButtonMultiply = CreateWindowW(L"button", L"*", WS_VISIBLE | WS_CHILD, 292, 200, 94, 75, hwnd, (HMENU) ID_BTNMULTIPLY, NULL, NULL);
            hwndButtonDivide = CreateWindowW(L"button", L"/", WS_VISIBLE | WS_CHILD, 292, 275, 94, 75, hwnd, (HMENU) ID_BTNDIVIDE, NULL, NULL);
            hwndButtonErase = CreateWindowW(L"button", L"DLT", WS_VISIBLE | WS_CHILD, 386, 50, 94, 75, hwnd, (HMENU) ID_BTNERASE, NULL, NULL);
            hwndButtonEqual = CreateWindowW(L"button", L"=", WS_VISIBLE | WS_CHILD, 198, 275, 94, 75, hwnd, (HMENU) ID_BTNEQUAL, NULL, NULL);


            break;
        }

        case WM_COMMAND: {

            if (LOWORD(wParam) == ID_BTNONE) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonOne) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonOne, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNTWO) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonTwo) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonTwo, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNTHREE) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonThree) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonThree, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNFOUR) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonFour) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonFour, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNFIVE) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonFive) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonFive, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNSIX) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonSix) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonSix, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNSEVEN) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonSeven) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonSeven, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNEIGHT) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonEight) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonEight, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNNINE) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonNine) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonNine, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNZERO) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonZero) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonZero, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNCOMMA) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonComma) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonComma, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNPLUS) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonPlus) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
               // answer = System::Convert::ToDouble;
                GetWindowText(hwndButtonPlus, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }

            if (LOWORD(wParam) == ID_BTNMINUS) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonMinus) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonMinus, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNMULTIPLY) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonMultiply) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonMultiply, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNDIVIDE) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonDivide) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonDivide, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNERASE) {
                int len = GetWindowTextLength(hwndTextbox);
                static char title[500];

                GetWindowText(hwndTextbox, title, len);

                SetWindowText(hwndTextbox, title);
            }
            if (LOWORD(wParam) == ID_BTNEQUAL) {
                int len = GetWindowTextLength(hwndTextbox) + 1;
                int len2 = GetWindowTextLength(hwndButtonEqual) + 1;
                static char title[500];
                static char title2[500];

                GetWindowText(hwndTextbox, title, len);
                GetWindowText(hwndButtonEqual, title2, len2);

                lstrcat(title, title2);

                SetWindowText(hwndTextbox, title);
            }


            break;
        }


        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}
