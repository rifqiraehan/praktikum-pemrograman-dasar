#include <stdio.h>

int main(){
    int n, i, j;
    printf("Masukkan nilai maksimal bilangan prima: ");
    scanf("%d", &n);

    int prime[n+1];

    // Langkah 1
    for(i = 0; i <= n; i++){
        prime[i] = 0;
    }

    // Langkah 2, Langkah 3, Langkah 6
    for( i= 2; i <= n; i++){
        // Langkah 4
        if(prime[i] == 0){
            printf("%d ", i);
            // Langkah 5
            for(j = 2; i * j <= n; j++){
                prime[i * j] = 1;
            }
        }
    }

    return 0;
}