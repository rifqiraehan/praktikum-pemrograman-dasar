#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 * Gunakan fasilitas pointer untukmembuat fungsi yang dapat digunakan untuk menghitung jumlah kata dari masukan string oleh user. Buatlah sebuah function untuk membuat setiap huruf pertama dari string yang diberikan menjadi huruf besar dengan fasilitas pointer.
 *
 */

void countWords(char *str, int *count){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            *count += 1;
        }
        i++;
    }
    *count += 1;
}

void capitalizeFirstLetter(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(i == 0){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
        else if(str[i] == ' '){
            i++;
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
        i++;
    }
}

int main(){
    char str[100];
    int count = 1;

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    countWords(str, &count);
    capitalizeFirstLetter(str);

    printf("Jumlah kata: %d\n", count - 1);
    printf("Hasil: %s\n", str);

    return 0;
}