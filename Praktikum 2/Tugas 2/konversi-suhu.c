#include <stdio.h>

int main(){
    float fahrenheit, celcius;
    printf("Masukkan derajat Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = (float) 5 / 9 * (fahrenheit - 32);

    printf("%.0f derajat Fahrenheit adalah = %.0f derajat Celcius\n", fahrenheit, celcius);
    return 0;
}