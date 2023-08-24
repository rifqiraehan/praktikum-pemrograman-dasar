#include <stdio.h>
#include <conio.h>

int main(){
    char karakter;

    system("cls");

    printf("\nMempelajari penggunaan getche() dengan variable");
    printf("\nTekan tombol yang dikehendaki ");

    // Mengganti getche() dengan getch()
    karakter = getch();

    // // Mengganti %c dengan %d
    printf("\n\nAnda menekan tombol %d\n", karakter);

    // Mengganti %d dengan %f
    printf("\nAnda menekan tombol %f\n", karakter);
    getch();
}