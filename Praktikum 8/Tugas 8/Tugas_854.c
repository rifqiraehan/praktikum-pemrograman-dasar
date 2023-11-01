#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD curpos;
    HANDLE hConsoleOut;
    curpos.X = x;
    curpos.Y = y;

    hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOut, curpos);
}

int main() {
    int x, y, i, j;
    char str[100] = "POLITEKNIK ELEKTRONIKA NEGERI SURABAYA";

    for(i = 0; i < 38; i++){
        x = strlen(str) - i;
        y = i + 1;
        for(j = 0; j <= i; j++){
            gotoxy(x, y);
            printf("%c", str[j]);
            x++;
        }
    }

    return 0;
}