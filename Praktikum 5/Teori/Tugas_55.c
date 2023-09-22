#include <stdio.h>

int main()
{
    int n, i, j, isPrime;

    printf("Masukkan Nilai Maksimum: ");

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            if (i == 2) {
                printf("%d", i);
            } else {
                printf(", %d", i);
            }
        }
    }

    // total prime number
    int total = 0;

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            total++;
        }
    }

    printf(" = %d deret\n", total);

    // sum the prime number
    int sum = 0;
    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            sum += i;
        }
    }

    printf("Jumlah Totalnya = %d\n", sum);

    return 0;
}