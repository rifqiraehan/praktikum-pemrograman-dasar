/* Program yang menentukan kelompok karakter dari input karakter yang dimasukkan user. */

#include <stdio.h>

int main(){
    int c;

    printf("Masukkan suatu karakter: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9') {
        printf("%c termasuk kelompok karakter angka.\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("%c termasuk kelompok karakter huruf kecil.\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c termasuk kelompok karakter huruf kapital.\n", c);
    } else {
        printf("%c termasuk kelompok karakter khusus.\n", c);
    }

    return 0;
}