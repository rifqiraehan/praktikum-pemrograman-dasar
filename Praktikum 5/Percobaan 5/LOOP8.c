#include <stdio.h>

int main(){
    int i = 0;

    for (i = 1; i < 10; i++) {
        printf("Proses ke-%d dibatalkan\n", i);
        printf("Harap maklum!\n");
        continue;
    }
    printf("Proses ke-%d sukses!\n", i);

    return 0;
}