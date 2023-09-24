#include <stdio.h>
#include <sys/time.h>

int main(){
    register int i;
    int j;

    struct timeval start, end;
    double cpu_time_used;

    gettimeofday(&start, NULL); // Waktu awal

    for(i = 0; i < 1000000; i++){
        i++;
    }

    gettimeofday(&end, NULL); // Waktu akhir

    cpu_time_used = (end.tv_sec - start.tv_sec) + ((end.tv_usec - start.tv_usec) / 1000000.0);

    printf("Waktu yang diperlukan untuk variabel register: %f detik\n", cpu_time_used);

    gettimeofday(&start, NULL); // Waktu awal

    for(j = 0; j < 1000000; j++){
        j++;
    }

    gettimeofday(&end, NULL); // Waktu akhir

    cpu_time_used = (end.tv_sec - start.tv_sec) + ((end.tv_usec - start.tv_usec) / 1000000.0);

    printf("Waktu yang diperlukan untuk variabel integer: %f detik\n", cpu_time_used);

    return 0;
}