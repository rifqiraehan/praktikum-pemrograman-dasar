#include <stdio.h>

int main(){
    int a, b, c, d, A, B, C, D, E;

    printf("Masukkan Nilai a: "); scanf("%d", &a);
    printf("Masukkan Nilai b: "); scanf("%d", &b);
    printf("Masukkan Nilai c: "); scanf("%d", &c);
    printf("Masukkan Nilai d: "); scanf("%d", &d);

    A = (a > b) && (c < d) || (a == b);
    B = (a == b) || (c == d) && (a < b);
    C = (a <= c) && (b >= d) || (a == d);
    D = (a >= d) || (b <= c) && (c == d);
    E = (a != b) || (c > d) || (a != d);

    printf("\nNilai dari (a > b) && (c < d) || (a == b) adalah %d\n", A);
    printf("Nilai dari (a == b) || (c == d) && (a < b) adalah %d\n", B);
    printf("Nilai dari (a <= c) && (b >= d) || (a == d) adalah %d\n", C);
    printf("Nilai dari (a >= d) || (b <= c) && (c == d) adalah %d\n", D);
    printf("Nilai dari (a != b) || (c > d) || (a != d) adalah %d\n\n", E);

    printf("Nilai dari (%d > %d) && (%d < %d) || (%d == %d) adalah %d\n", a, b, c, d, a, b, A);
    printf("Nilai dari (%d == %d) || (%d == %d) && (%d < %d) adalah %d\n", a, b, c, d, a, b, B);
    printf("Nilai dari (%d <= %d) && (%d >= %d) || (%d == %d) adalah %d\n", a, c, b, d, a, d, C);
    printf("Nilai dari (%d >= %d) || (%d <= %d) && (%d == %d) adalah %d\n", a, d, b, c, c, d, D);
    printf("Nilai dari (%d != %d) || (%d > %d) || (%d != %d) adalah %d\n", a, b, c, d, a, d, E);

    return 0;
}