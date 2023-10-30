#include <stdio.h>
#include <stdlib.h>


int main(){

    char str[100] = "POLITEKNIK ELEKTRONIKA NEGERI SURABAYA";
    int i, j;

    for(i = 0; i < 38; i++){
        for(j = 0; j <= i; j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}