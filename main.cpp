// #include <iostream>
#include <windows.h>
#include <shellapi.h>

// DWORD pid;
// DWORD MinimizeState = 0x015FBE90;
// int value;

int main() {
    // HWND hWnd = FindWindowA(NULL, ("BUFF App - Startgame"));
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    // GetWindowThreadProcessId(hWnd, &pid);
    // std::cout << pid << std::endl;
    // HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    // ShowWindow(FindWindow(NULL, "BUFF App - Startgame"), SW_HIDE);
    // ShowWindow(FindWindow(NULL, "BUFF App - Bonus Screen"), SW_HIDE);
    // ShowWindow(FindWindow(NULL, "BUFF App"), SW_HIDE);

    
    // std::cout < "test" << std::endl;
    while (true) {
    // ReadProcessMemory(pHandle, (void*)MinimizeState, &value, sizeof(value), NULL);
    // std::cout << "a" << std::endl;
        // if (value == 1) {
        // ShowWindow(hWnd, SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App - Startgame"), SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App - Bonus Screen"), SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App - Endgame"), SW_HIDE);
        // ShowWindow(FindWindow(NULL, "BUFF App"), SW_HIDE);
        Sleep(500);
    }


    return 0;
}