#include <stdio.h>

/**
 * Docs:
 * Bilangan prima juga dapat dihasilkan dengan suatu algoritma yang dikenal sebagai Sieve of Erastosthenes.
 * Buatlah program untuk mengimplementasikan algoritma tersebut.
 * Algoritma Sieve of Erastosthenes, untuk menampilkan semua bilangan prima antara 1 sampai n.
 * Langkah 1: Definisikan suatu array P untuk bilangan bulat. Set semua elemen menjadi 0,
 * yaitu array berindeks dari 0 sampai n.
 * Langkah 2: Set i sama dengan 2.
 * Langkah 3: Bila i>n, algoritma selesai.
 * Langkah 4: Bila Pi adalah nol, maka i adalah bilangan prima.
 * Langkah 5: Untuk semua nilai bulat positif j, yaitu i x j<n, set Pixj menjadi 1.
 * Langkah 6: Tambahkan 1 pada i dan lanjutkan ke Langkah 3.
 */

int main(){
    int n, i, j;
    printf("Masukkan nilai maksimal bilangan prima: ");
    scanf("%d", &n);

    int prime[n+1];

    // Langkah 1
    for(i = 0; i <= n; i++){
        prime[i] = 0;
    }

    // Langkah 2, Langkah 3, Langkah 6
    for( i= 2; i <= n; i++){
        // Langkah 4
        if(prime[i] == 0){
            printf("%d ", i);
            // Langkah 5
            for(j = 2; i * j <= n; j++){
                prime[i * j] = 1;
            }
        }
    }

    return 0;
}