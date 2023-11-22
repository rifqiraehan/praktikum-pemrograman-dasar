/**
 * Buatlah fungsi yang disebut strsisip() untuk menyisipkan satu karakter string kedalam string lainnya.
 * Argumen untuk fungsi harus berisi string sumber, string yang disisipkan, dan posisi dari string sumber
 * dimana string disisipkan. Jadi dapat dipanggil seperti dibawah ini:
 * strsisip (teks, "se", 6); dengan teks adalah kalimat "salah orang".
 * Jadi setelah penyisipan kata menjadi "salah seorang".

*/

#include <stdio.h>
#include <string.h>

void strsisip(char teks[], char str1[], int a){
    char hasil[100];
    strncpy(hasil,teks,a);
    strncat(hasil+a,str1,strlen(str1)-1);
    strcat(hasil+a+strlen(str1-1), teks+a);
    puts(hasil);
}

int main(){
    char teks[100], str1[100];
    int a;

    puts("Masukkan kalimat: ");
    fgets(teks, sizeof teks, stdin);

    puts("Karakter yang akan disisipkan: ");
    fgets(str1, sizeof str1, stdin);

    puts("Posisi string yang akan disisipi: ");
    scanf("%d", &a);

    puts("Hasil setelah disisipi adalah: ");
    strsisip(teks, str1, a);

    return 0;
}