#include <stdio.h>
#include <sys/time.h>

#include <stdio.h>
#include <sys/time.h>

/**
 * This program compares the execution time of a loop using a register variable and an integer variable.
 * It measures the time taken by each loop to execute 1,000,000 iterations and prints the results.
 * The program uses the gettimeofday() function to measure the time taken by each loop.
 *
 * @return 0 if the program runs successfully
 */

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

/*
Catatan Rifqi Raehan:
File header sys/time.h menyediakan fungsi untuk mendapatkan waktu prosesor, seperti gettimeofday(). Fungsi ini mengembalikan nilai waktu dalam format struct timeval, yang memiliki dua anggota, yaitu tv_sec dan tv_usec. tv_sec menyimpan waktu dalam detik, sedangkan tv_usec menyimpan waktu dalam mikrodetik. Jika ingin mengukur waktu sistem, dapat menggunakan file header time.h dan fungsi time() atau localtime(). Namun, jika ingin mengukur waktu prosesor, harus menggunakan file header sys/time.h dan fungsi gettimeofday().

Github Copilot:
The sys/time.h header file provides access to the gettimeofday() function, which is used to get the current time with microsecond precision. On the other hand, the time.h header file provides access to the time() function, which only provides time with second precision.

In the code above, gettimeofday() is used to measure the time taken to execute the loops with microsecond precision. This level of precision is necessary for accurate benchmarking of the loops. Therefore, sys/time.h is used instead of time.h.
*/