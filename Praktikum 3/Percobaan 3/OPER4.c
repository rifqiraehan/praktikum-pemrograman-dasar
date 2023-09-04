#include <stdio.h>

int main(){
    int a, b, x, y;

    printf("Masukkan nilai a = "); scanf("%d", &a);
    printf("Masukkan nilai b = "); scanf("%d", &b);
    printf("Masukkan nilai x = "); scanf("%d", &x);
    printf("Masukkan nilai y = "); scanf("%d", &y);

    printf("\nNilai y dari y *= x adalah = %d\n", y*=x);
    printf("Nilai y dari y /= x adalah = %d\n", y/=x);
    printf("Nilai y dari y += x adalah = %d\n", y+=x);
    printf("Nilai y dari y -= x adalah = %d\n", y-=x);
    printf("Nilai y dari y %%= x adalah = %d\n", y%=x);

    printf("\nNilai y dari y*=(a + b) adalah = %d\n", y*=(a+b));
    printf("Nilai y dari y/=(a - b) adalah = %d\n", y/=(a-b));
    printf("Nilai y dari y+=(a %% b) adalah = %d\n", y+=(a%b));
    printf("Nilai y dari y-=(a / b) adalah = %d\n", y-=(a/b));

    return 0;
}