#include <stdio.h>

int main(){
    int x, y;

    printf("Masukkan nilai x: ", x);
    scanf("%d", &x);

    printf("Masukkan nilai y: ", y);
    scanf("%d", &y);

    printf("\nNilai dari %d & %d adalah %d\n", x, y, x & y);
    printf("Nilai dari %d | %d adalah %d\n", x, y, x | y);
    printf("Nilai dari %d && %d adalah %d\n", x, y, x && y);
    printf("Nilai dari %d || %d adalah %d\n", x, y, x || y);
    printf("Nilai dari !0 adalah %d\n", !0);
    printf("Nilai dari !1 adalah %d\n", !1);
    printf("Nilai dari !%d adalah %d\n", x, !x);
    printf("Nilai dari !%d adalah %d\n", y, !y);

    return 0;
}