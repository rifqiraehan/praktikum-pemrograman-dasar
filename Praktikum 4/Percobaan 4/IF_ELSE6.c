#include <stdio.h>
#include <conio.h>

void main(){
    int valid_operator = 1;
    char operator;
    float bil1, bil2, hasil;

    printf("Masukkan 2 bilangan dan sebuah operator.\n");
    printf("Dengan format:\n");
    printf("= bilangan-1 operator bilangan-2\n");
    printf("= ");

    scanf("%f %c %f", &bil1, &operator, &bil2);

    if (operator == '*'){
        hasil = bil1 * bil2;
    } else if(operator == '/') {
        hasil = bil1 / bil2;
    } else if(operator == '+') {
        hasil = bil1 + bil2;
    } else if(operator == '-') {
        hasil = bil1 - bil2;
    } else {
        valid_operator = 0;
    }

    if (valid_operator){
        printf("Hasil perhitungan\n");
        printf("%g %c %g = %g\n", bil1, operator, bil2, hasil);
    } else {
        printf("Operator SALAH!\n");
        printf("Gunakan Operator +, -, / dan * saja!\n");
    }

    getch();
}