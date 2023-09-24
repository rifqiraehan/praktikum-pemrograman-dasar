#include <stdio.h>
#include <time.h>

int main(){
    register int i;
    int j;

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    for(i = 0; i < 1000; i++){
        printf("%d\n", i);
    }

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time taken by register variable: %f\n", cpu_time_used);

    start = clock();

    for(j = 0; j < 1000; j++){
        printf("%d\n", j);
    }

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time taken by integer variable: %f\n", cpu_time_used);

    return 0;
}