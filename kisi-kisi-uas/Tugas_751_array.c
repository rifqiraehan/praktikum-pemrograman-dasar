/**
 * Buatlah program untuk mengurutkan data dengan urutan naik (ascending) yang dimasukan melalui
 * keyboard. Program juga menanyakan banyaknya data yang dimasukkan.
 * Input: jumlah data (n), data ke-1 s/d data ke-n
 * Output: Tampilan data dalam keadaan terurut
*/

#include <stdio.h>

int main(){
    int i, j, a, n, data[5];
    printf("Masukkan jumlah data yang dimasukkan: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                a = data[i];
                data[i] = data[j];
                data[j] = a;
            }

        }
    }

    printf("\nList data dengan urutan Ascending sebagai berikut:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", data[i]);
    }

    return 0;
}