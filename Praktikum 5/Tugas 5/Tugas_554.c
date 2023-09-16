#include <stdio.h>

int main(){
    int i;
    float celcius, fahrenheit, reamur, kelvin;

    printf("-------------------------------------------------\n");
    printf("| No. | Celcius | Fahrenheit  | Reamur | Kelvin |\n");
    printf("-------------------------------------------------\n");


    for (i = 1; i <= 11; i++){
        celcius = (i - 1) * 10;
        fahrenheit = (celcius * 9 / 5) + 32;
        reamur = celcius * 4 / 5;
        kelvin = celcius + 273;

        printf("| %-2d  |\t%.0f\t| %-3.0f         | %-3.0f    |   %.0f  |\n", i, celcius, fahrenheit, reamur, kelvin);
        printf("-------------------------------------------------\n");
    }


    return 0;
}