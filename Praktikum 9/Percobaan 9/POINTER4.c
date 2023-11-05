#include <stdio.h>
#include <conio.h>

void naikkan_nilai(int *x, int *y);

void naikkan_nilai(int *x, int *y){
    *x = *x + 2;
    *y = *y + 3;
}

void main(){
    int a = 3, b = 7;

    printf("SEMULA: a b= %d   b = %d\n", a, b);
    naikkan_nilai(&a, &b);
    printf("SEKARANG: a = %d   b = %d\n", a, b);

    getch();
}