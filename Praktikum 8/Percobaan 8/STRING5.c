#include <stdio.h>
#include <conio.h>

int alphabetic(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int hitung_kata(char string[]){
    int i, lihat_kata = 1, kata_terhitung = 0;

    for (i = 0; string[i] != '\0'; ++i){
        if (!alphabetic(string[i])){
            if (lihat_kata){
                ++kata_terhitung;
                lihat_kata = 0;
            }
        }
        else{
            lihat_kata = 1;
        }
    }

    return (kata_terhitung);
}

void main(){

    int hitung;
    static char teks1[] = "Angka atau bilangan 0123456789";
    static char teks2[] = "juga termasuk karakter string.";

    printf("Teks 1: %s\n", teks1);
    printf("Teks 2: %s\n", teks2);

    hitung = hitung_kata(teks1);
    hitung += hitung_kata(teks2);
    printf("Terhitung ada %d kata pada teks diatas!\n", hitung);

    getch();
}