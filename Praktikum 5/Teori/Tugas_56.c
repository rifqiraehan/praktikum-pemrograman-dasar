#include <stdio.h>

/*
 * This program calculates the square root of a given number using the Newton-Raphson method.
 * It takes a number as input from the user and iteratively calculates the square root using the formula:
 * newGuess = (guess + number / guess) / 2.0
 * where guess is initialized to number / 2.0.
 * The program prints the intermediate calculations and the final result with a precision of 4 decimal places.
 */

int main(){
    double number;
    printf("Masukkan Bilangan: ");
    scanf("%lf", &number);

    double guess = number / 2;

    for (int i = 0; i < 6; i++) {
        double newGuess = (guess + number / guess) / 2.0;
        printf("Akar = (%.2lf + %.0lf / %.2lf) / 2 = (%.2lf + %.2lf) / 2 = %.4lf\n", guess, number, guess, guess, number / guess, newGuess);
        guess = newGuess;
    }

    return 0;
}

/*
In this code, guess is a variable of type double that is used to store the initial guess for the square root of the given number.

The initial guess is calculated by dividing the given number by 2, which is a common starting point for the Newton-Raphson method. The Newton-Raphson method is an iterative method for finding the roots of a function, and it requires an initial guess to start the iteration.

In this case, the function being used is f(x) = x^2 - number, where number is the given number. The square root of number is the value of x that makes f(x) = 0. The Newton-Raphson method is used to find this value of x.

The guess variable is used as the initial guess for the Newton-Raphson method. In each iteration of the loop, a new guess is calculated using the Newton-Raphson formula, and the guess variable is updated to store the new guess.
*/