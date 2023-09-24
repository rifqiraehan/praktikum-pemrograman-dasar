#include <stdio.h>
#include <conio.h>

float absolut(float x) {
    if (x < 0) {
        x = -x;
    }
    return (x);
}

float akar(float x) {
    float epsilon = .00001;
    float guess = 1.0;

    if (x < 0) {
        printf("Argumen negatif!\n");
        return (-1.0);
    }

    while (absolut(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return (guess);
}

void main(){
    printf("akar (4.0)     = %f\n", akar(4.0));
    printf("akar (625.0)    = %f\n", akar(625.0));
    printf("akar (-39.5)    = %f\n", akar(-39.5));

    getch();
}