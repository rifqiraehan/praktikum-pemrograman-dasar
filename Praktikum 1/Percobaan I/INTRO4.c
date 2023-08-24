#include <stdio.h>
#include <conio.h>

int main(){
    char karakter;

    // Mengganti clrscr() dengan system("cls") untuk membersihkan layar konsol
    system("cls");

    printf("\nMempelajari penggunaan getche() dengan variable");
    printf("\nTekan tombol yang dikehendaki ");

    karakter = getche();

    printf("\n\nAnda menekan tombol %c\n", karakter);

    getch();
}