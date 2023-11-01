#include <stdio.h>
#include <string.h>

int main(){
    char cek[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                    's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
                    'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                    'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                    };

    int jmlh[52] = {0};

    char kalimat[100];
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    int i, j;

    // hitung jumlah huruf
    for(i = 0; i < strlen(kalimat); i++){
        for(j = 0; j < 52; j++){
            if(kalimat[i] == cek[j]){
                jmlh[j]++;
            }
        }
    }

    // cetak total huruf yang dimasukkan
    printf("Jumlah huruf: %d\n", strlen(kalimat) - 1);

    // Tampilkan hasil
    for(i = 0; i < 52; i++){
        if(jmlh[i] != 0){
            printf("%c: %d\n", cek[i], jmlh[i]);
        }
    }

    return 0;
}