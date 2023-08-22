#include <stdio.h>
#include <conio.h>

void main(){
    int var1 = 339, var2, jumlah, selisih;
    var2 = 259;

    jumlah = var1 + var2;
    selisih = var1 - var2;

    printf("Hasil penjumlahan %d dan %d = %d\n\n", var1, var2, jumlah);
    printf("Hasil pengurangan %d dan %d = %d\n\n", var1, var2, selisih);

    getch();
}