#include <stdio.h>

int main(){
    int i, j;
    int data[2][8]  = {{1, 2, 3, 4, 5, 6, 7, 8},
                      {7, 8, 4, 2, 9, 3, 1, 6}};

    // Menampilkan Data Array
    printf("Data Awal:\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 8; ++j)
            printf("%d ", data[i][j]);
        printf("\n");
    }

    // Menampilkan Data Array Ganjil
    printf("\nData Ganjil:\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 8; ++j){
            if (data[i][j] % 2 != 1)
                printf("%d ", data[i][j]);
        }
    }

    // Menampilkan angka terbesar dari array
    int max = data[0][0];
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 8; ++j){
            if (data[i][j] > max)
                max = data[i][j];
        }
    }
    printf("\n\nAngka terbesar dari array adalah %d\n", max);

    // Sorting array
    int data2[16];
    int k = 0;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 8; ++j){
            data2[k] = data[i][j];
            k++;
        }
    }

    int temp;
    for (int i = 0; i < 16; ++i){
        for (int j = i + 1; j < 16; ++j){
            if (data2[i] > data2[j]){
                temp = data2[i];
                data2[i] = data2[j];
                data2[j] = temp;
            }
        }
    }

    // Menampilkan array dengan urutan naik
    printf("\nData dengan urutan dari kecil:\n");
    for (int i = 0; i < 8; ++i){
        printf("%d ", data2[i]);
    }

    printf("\n");

    for (i = 8; i < 16; i++){
        printf("%d ", data2[i]);
    }

    // Menampilkan rata-rata dari array
    float sum = 0.0;
    for (int i = 0; i < 16; ++i){
        sum += data2[i];
    }
    printf("\n\nNilai rata-rata dari array adalah %.2lf\n", (float) sum / 16);


    // Menampilkan median dari array
    float median;
    if (16 % 2 == 0){
        median = (data2[7] + data2[8]) / 2.0;
    } else {
        median = data2[8];
    }

    printf("\nNilai median dari array adalah %.2lf\n", median);


    return 0;
}