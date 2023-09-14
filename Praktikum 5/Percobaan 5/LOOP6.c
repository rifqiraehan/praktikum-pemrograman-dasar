#include <stdio.h>

int main(){
    int hitung, hasil;

    hitung = 1;
    hasil = 0;

    do {
        hasil+=hitung;
        printf("%3d %5d\n", hitung, hasil);
        ++hitung;
    } while (hitung<=10);
    
    return 0;
}