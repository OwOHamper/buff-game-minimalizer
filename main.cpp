#include <windows.h>
#include <shellapi.h>

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    while (true) {
        ShowWindow(FindWindow(NULL, "BUFF App - Startgame"), SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App - Bonus Screen"), SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App - Endgame"), SW_HIDE);
        ShowWindow(FindWindow(NULL, "BUFF App"), SW_HIDE);
        Sleep(500);
    }
    return 0;
}
