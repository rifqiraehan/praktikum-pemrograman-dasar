#include <stdio.h>

int main(){
    int bulat = 32767;
    float pecahan = 339.1234567;
    double ganda = 3.4567890e+11;
    char karakter = 'W';

    printf("Variabel bilangan bulat     = %d\n", bulat);
    printf("Variabel bilangan pecahan   = %f\n", pecahan);
    printf("Variabel bilangan pecahan2  = %lf\n", ganda);
    printf("Variabel bilangan karakter  = %c\n", karakter);

    return 0;
}