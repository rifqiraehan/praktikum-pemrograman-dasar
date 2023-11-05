#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  Buatlah kode program untuk menyimpan bilangan integer acak (fungsi rand(), srand(time(0)), ada didalam include stdlib.h, dan time.h) sebanyak 14 bilangan atau lebih, dengan jangkauan 1 - 999 yang disimpan dalam suatu array.
Urutkan bilangan-bilangan tersebut dan tampilkan sebelum dan sesudah diurutkan menggunakan index array dan pointer (3 cara seperti pada percobaan Praktikum 9\Percobaan 9\POINTER2.c)
*/

int main(){
    int arr[14];
    int *ptr = arr;

    srand(time(0));

    for (int i = 0; i < 14; i++){
        *(ptr + i) = rand() % 999 + 1;
    }

    printf("SEBELUM DIURUTKAN\n");
    printf("menggunakan pointer dan index:\n");
    for (int i = 0; i < 14; i++){
        printf("%d ", arr + i);
    }

    printf("\n\nmenggunakan array:\n");
    for (int i = 0; i < 14; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\nmenggunakan pointer:\n");
    for (int i = 0; i < 14; i++){
        printf("%d ", *ptr++);
    }


    for (int i = 0; i < 14; i++){
        for (int j = 0; j < 14; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\n\nSETELAH DIURUTKAN\n");
    printf("menggunakan pointer dan index:\n");
    for (int i = 0; i < 14; i++){
        printf("%d ", arr + i);
    }

    printf("\n\nmenggunakan array:\n");
    for (int i = 0; i < 14; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\nmenggunakan pointer:\n");
    ptr = arr;
    for (int i = 0; i < 14; i++){
        printf("%d ", *ptr++);
    }

    return 0;
}