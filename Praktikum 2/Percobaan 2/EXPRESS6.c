#include <stdio.h>

int main(){
    int x, y, z;

    x = 80; y = x++; z = ++x;
    printf("Nilai dari x, y, z adalah %d, %d, %d\n\n", x, y, z);

    y = x--; z = --x;
    printf("Nilai dari x, y, z adalah %d, %d, %d\n", x, y, z);

    return 0;
}