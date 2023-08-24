#include <stdio.h>
#include <conio.h>

int main(){
    float celcius, fahrenheit;

    celcius = 100;

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("Hasil dari konversi suhu %.0f derajat Celsius ke Fahrenheit adalah %.0f derajat Fahrenheit.\n", celcius, fahrenheit);

    getch();

    return 0;
}