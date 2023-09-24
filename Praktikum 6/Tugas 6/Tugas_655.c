#include <stdio.h>

int prima(int i){
    if (i == 0 || i == 1){
        return 0;
    } else if (i == 2){
        return 1;
    } else {
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int num;

    printf("Masukkan Bilangan : ");
    scanf("%d", &num);

    prima(num);

    printf("Nilai balik: %d\n", prima(num));

    return 0;
}