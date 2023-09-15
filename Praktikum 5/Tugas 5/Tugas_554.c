#include <stdio.h>

int main(){
    int i;
    float celcius, fahrenheit, reamur, kelvin;

    printf("No.\tCelcius\t\tFahrenheit\tReamur\t\tKelvin\n");

    for (i = 1; i <= 11; i++){
        celcius = (i - 1) * 10;
        fahrenheit = (celcius * 9 / 5) + 32;
        reamur = celcius * 4 / 5;
        kelvin = celcius + 273;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", i, celcius, fahrenheit, reamur, kelvin);
    }


    return 0;
}