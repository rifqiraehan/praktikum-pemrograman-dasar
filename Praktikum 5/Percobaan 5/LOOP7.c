#include <stdio.h>

int main(){
    int i = 0;

    for (;;) {
        i++;
        printf("Proses ke-%d sukses!\n", i);
        if (i == 10) {
            printf("Proses segera dihentikan, harap maklum!\n");
            break;
        }
    }
    return 0;
}