#include <stdio.h>
#include <ctype.h>

int main(){
    char chars[4];

    for (int i = 0; i < 4; i++) {
        printf("Masukkan satu karakter: ");
        int c = scanf("%c", &chars[i]);
        getchar();

        if (c == 1) {
            if (isupper(chars[i])) {
            printf("%c termasuk kelompok huruf kapital\n", chars[i]);
            } else if (islower(chars[i])){
                printf("%c termasuk kelompok huruf kecil\n", chars[i]);
            } else if (isdigit(chars[i])){
                printf("%c termasuk kelompok angka\n", chars[i]);
            } else {
                printf("%c termasuk kelompok karakter khusus\n", chars[i]);
            }
        }
    }

    return 0;
}