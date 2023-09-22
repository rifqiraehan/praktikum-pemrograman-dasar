#include <stdio.h>

int main(){
    int i, j;
    for (i = 0; i < 5; i++){
        printf("---------------------\n");
        for (j = 0; j < 5; j++){
            printf("| %d ", j+1);
        }
        printf("|\n");
    }
    printf("---------------------\n");

    return 0;
}