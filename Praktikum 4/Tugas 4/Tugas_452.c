#include <stdio.h>

int main(){
    char c;

    printf("Masukkan satu karakter: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9') {
        printf("%c termasuk Kelompok Angka\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("%c termasuk Kelompok Huruf Kecil\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c termasuk Kelompok Huruf Kapital\n", c);
    } else {
        printf("termasuk Kelompok Karakter Khusus\n", c);
    }

    return 0;
}