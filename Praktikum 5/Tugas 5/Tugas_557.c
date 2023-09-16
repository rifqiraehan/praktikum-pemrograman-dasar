#include <stdio.h>

int main(){
    int i, j, factorial = 1;

    printf("--------------------\n");
    printf("|   i |\t\ti! |\n");
    printf("--------------------\n");
    for (i = 1; i <= 10; i++){
        factorial *= i;
        printf("| %3d |\t%10d |\n", i, factorial);
    printf("--------------------\n");
    }

    return 0;
}