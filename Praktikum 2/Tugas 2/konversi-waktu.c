#include <stdio.h>
#include <time.h>

int main(){
    int jam, menit, waktuMenit;

    printf("Program Konversi jam ke menit\n");
    printf("Masukkan jam dan menit (jj:mm) = ");
    scanf("%d:%d", &jam, &menit);

    waktuMenit = (jam  * 60) + menit;

    printf("Jam  adalah %d:%d adalah setara dengan %d menit\n", jam, menit, waktuMenit);

    return 0;
}