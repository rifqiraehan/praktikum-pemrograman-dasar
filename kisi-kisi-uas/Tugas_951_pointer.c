/**
 * Buatlah program untuk menyimpan bilangan pecahan acak sebanyak 12 bilangan, yang disimpan dalam
 * suatu array. Urutkan bilangan-bilangan tersebut dan tampilkan sebelum dan sesudah diurutkan
 * menggunakan index array dan pointer.

*/

#include <stdio.h>

int main(){
    float arr[12] = {1.2, 3.4, 5.6, 7.8, 9.0, 1.2, 3.4, 5.6, 7.8, 9.0, 1.2, 3.4};
    float *ptr = arr;
    int i, j;

    printf("Sebelum diurutkan:\n");
    for (i = 0; i < 12; i++){
        printf("%.2f ", *(ptr + i));
    }

    for (i = 0; i < 12; i++){
        for (j = i + 1; j < 12; j++){
            if (*(ptr + i) > *(ptr + j)){
                float temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("\n\nSetelah diurutkan:\n");
    for (i = 0; i < 12; i++){
        printf("%.2f ", *(ptr + i));
    }

    return 0;
}