#include <stdio.h>
#include <math.h>

int main()
{
    int input, sisa, hasil, biner = 0;
    int i = 0;

    printf("Masukkan Bilangan: ");
    scanf("%d", &input);

    hasil = input;

    while (hasil > 0) {
        sisa = hasil % 2;
        printf("%d/2 = %d sisa %d\n", hasil, hasil / 2, sisa);
        hasil = hasil / 2;
        biner = biner + sisa * pow(10, i);

        i++;
    }

    printf("Bilangan Biner: %d\n", biner);

    return 0;
}