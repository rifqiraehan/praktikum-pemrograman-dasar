#include <stdio.h>

int main(){
    int i, j;
    float average;

    // 4 baris = 4 mahasiswa, 3 kolom = 3 mata kuliah
    int nilai[4][3] = {
        {81, 90, 62},
        {50, 83, 87},
        {89, 55, 65},
        {77, 70, 92}
    };

    printf("No. Mhs\t Rata-rata\n");
    printf("-------------------\n");
    for (i = 0; i < 4; i++) {
        average = (float) (nilai[i][0] + nilai[i][1] + nilai[i][2]) / 3;
        printf("%2d\t %.2f\n", i + 1, average);
    }
    printf("-------------------\n");

    return 0;
}