#include <stdio.h>

int main(){
    int i;

    for (i = 1; i < 10; i++) {
        if (i == 5) {
            printf("Proses ke-%d dibatalkan\n", i);
            printf("Harap maklum!\n");
            continue;
        }
    }
    printf("Proses ke-%d sukses!\n", i);

    return 0;
}