#include <stdio.h>

int main(){
    double number;
    printf("Masukkan Bilangan: ");
    scanf("%lf", &number);

    double guess = number / 2;


    for (int i = 0; i < 6; i++) {
        double newGuess = (guess + number / guess) / 2.0;
        printf("Akar = (%.2lf + %.0lf / %.2lf) / 2 = (%.2lf + %.2lf) / 2 = %.2lf\n", guess, number, guess, guess, number / guess, newGuess);
        guess = newGuess;
    }

    return 0;
}