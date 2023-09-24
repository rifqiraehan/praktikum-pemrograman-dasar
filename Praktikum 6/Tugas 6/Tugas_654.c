#include <stdio.h>

float temperature(float s, char d){
    float result;

    switch(d){
        case 'C':
            result = s;
            break;
        case 'F':
            result = (s * 9 / 5) + 32;
            break;
        case 'R':
            result = s * 4 / 5;
            break;
        default:
            result = 0;
            break;
    }

    return result;
}

int main(){
    float s;
    char d;

    printf("Masukkan suhu sumber = ");
    scanf("%f %c", &s, &d);

    printf("Masukkan suhu tujuan = ");
    scanf(" %c", &d);

    printf("Hasil konversi suhu = %.2f %c\n", temperature(s, d), d);

    return 0;
}