#include <stdio.h>
#include <conio.h>

void main(){
    int nilai[10];
    int indeks;

    system("cls");

    nilai[0] = 197;
    nilai[2] = -100;
    nilai[5] = 350;
    nilai[3] = nilai[0] + nilai[5];
    nilai[9] = nilai[5] / 10;
    --nilai[2];

    for (indeks = 0; indeks < 10; ++indeks) {
        printf("nilai[%d] = %d\n", indeks, indeks[nilai]);
    }

    getch();
}