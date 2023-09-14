#include <stdio.h>

int main(){
    int number, remainder, reversed;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &number);

    while (number > 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
    
    printf("Hasil setelah dibalik: %d", reversed);

    return 0;
}