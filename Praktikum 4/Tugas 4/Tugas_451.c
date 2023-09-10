#include <stdio.h>

int main(){
    int number;

    printf("Masukkan bilangan: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d adalah bilangan genap.\n", number);
    } else {
        printf("%d adalah bilangan ganjil.\n", number);
    }

    return 0;
}