#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char kalimat[50];

    printf("Masukkan kata/kalimat: ");
    scanf("%s", kalimat);

    puts("");
    printf("\nKata/kalimat sebelum strrev():\n");
    printf("%s\n", kalimat);
    printf("\nKata/kalimat setelah strrev():\n");
    strrev(kalimat);
    printf("%s\n", kalimat);

    getch();
}