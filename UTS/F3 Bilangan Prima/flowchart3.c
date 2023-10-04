#include <stdio.h>

int main(){
    int i, j, prima;

    printf("Masukkan nilai maksimal: ");
    scanf("%d", &j);

    for (i = 2; i <= j; i++) {
        prima = 1;
        for (int k = 2; k < i; k++) {
            if (i % k == 0) {
                prima = 0;
                break;
            }
        }

        if (prima == 1) {
            printf("%d, ", i);
        }
    }

    return 0;
}