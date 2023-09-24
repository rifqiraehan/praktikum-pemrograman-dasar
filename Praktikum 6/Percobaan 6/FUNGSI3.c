#include <stdio.h>
#include <conio.h>

void fpb(int, int);

void main(){
    fpb(150, 35);
    fpb(1026, 405);
    fpb(83, 240);

    getch();
}

void fpb(int u, int v) {
    int tampung;

    printf("FPB dari %d dan %d adalah ", u, v);
    while (v != 0) {
        tampung = u % v;
        u = v;
        v = tampung;
    }

    printf("%d\n", u);
}