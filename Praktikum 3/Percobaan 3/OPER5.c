#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Masukkan nilai a: ", a); scanf("%d", &a);
    printf("Masukkan nilai b: ", b); scanf("%d", &b);
    printf("Masukkan nilai c: ", c); scanf("%d", &c);
    printf("Masukkan nilai d: ", d); scanf("%d", &d);

    printf("\nNilai a dibanding b adalah a lebih %s daripada b \n", (a>b) ? "besar" : "kecil");
    printf("Nilai c dibanding d adalah c lebih %s daripada d \n", (c<d) ? "kecil" : "besar");

    return 0;
}