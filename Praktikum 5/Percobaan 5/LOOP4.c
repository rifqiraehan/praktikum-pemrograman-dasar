#include <stdio.h>

int main(){
    int hitung, hasil;

    hitung=hasil=1;

    while (hitung<=10) {
        hasil*=hitung;
        printf("%3d %8d\n", hitung, hasil);
        ++hitung;
    }

    return 0;
}