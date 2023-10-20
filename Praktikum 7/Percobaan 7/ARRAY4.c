#include <stdio.h>

int findmax(int[], int);

void main(){
    static int data1[] = {5, 34, 56, -12, 3, 19};
    static int data2[] = {1, -2, 34, 207, 93, -12};

    printf("nilai maksimum dari data1[] adalah %d\n", findmax(data1, 6));
    printf("nilai maksimum dari data2[] adalah %d\n", findmax(data2, 6));
}

int findmax(int nilai[], int jml_data){
    int terbesar, i;

    terbesar = nilai[0];
    for (i = 1; i < jml_data; ++i)
        if (nilai[i] > terbesar) terbesar = nilai[i];

    return terbesar;
}