#include <stdio.h>
#include <conio.h>

void main(){
    int a, *b, **c;

    a = 1975;
    b = &a;
    c = &b;

    printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
    printf("b = %p = alamat a di memori\n", b);
    printf("c = %p = alamat b di memori\n", c);
    printf("alamat c di memori = %p\n", c);

    getch();
}