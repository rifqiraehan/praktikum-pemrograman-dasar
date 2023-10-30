#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, huruf_kecil, huruf_besar, angka, tanda_baca, total_karakter;

    huruf_kecil = huruf_besar = angka = tanda_baca = total_karakter = 0;

    printf("Masukkan string: "); scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            huruf_kecil++;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            huruf_besar++;
        }else if(str[i] >= '0' && str[i] <= '9'){
            angka++;
        }else if(str[i] == ',' || str[i] == '\'' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == ';'){
            tanda_baca++;
        }
    }

    total_karakter = strlen (str);

    printf("Jumlah huruf kecil: %d\n", huruf_kecil);
    printf("Jumlah huruf besar: %d\n", huruf_besar);
    printf("Jumlah angka: %d\n", angka);
    printf("Jumlah tanda baca: %d\n", tanda_baca);
    printf("Total karakter: %d\n", total_karakter);

    return 0;
}