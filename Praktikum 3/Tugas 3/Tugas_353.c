#include <stdio.h>

int main()
{
    int a, b, c, d, max = a;

    printf("Masukkan nilai a = "); scanf("%d", &a);
    printf("Masukkan nilai b = "); scanf("%d", &b);
    printf("Masukkan nilai c = "); scanf("%d", &c);
    printf("Masukkan nilai d = "); scanf("%d", &d);

    printf(a > b ? "\nNilai a lebih besar dari b\n"
    : a == b ? "\nNilai a sama dengan nilai b\n"
    : "\nNilai a lebih kecil dari b\n");

    printf(c < d ? "Nilai c lebih kecil dari d\n"
    : c == d ? "Nilai c sama dengan nilai d\n"
    : "Nilai c lebih besar dari d\n");

    max = (b > max) ? b : max;
    max = (c > max) ? c : max;
    max = (d > max) ? d : max;

    printf("Nilai maksimum adalah %d\n", max);

    return 0;
}