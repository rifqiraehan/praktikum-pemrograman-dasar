#include <stdio.h>

int panjang_str(char string[]) {
    int hitung = 0;

    while(string[hitung] != '\0') {
        hitung++;
    }

    return (hitung);
}

int main(){
    static char kata0[] = {'b', 'e', 'l', 'a', 'j', 'a', 'r', '\0'};
    static char kata1[] = {'f', 'u', 'n', 'g', 's', 'i', '\0'};
    static char kata2[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};

    printf("Panjang string 0 = %d\n", panjang_str(kata0));
    printf("Panjang string 1 = %d\n", panjang_str(kata1));
    printf("Panjang string 2 = %d\n", panjang_str(kata2));

    return 0;
}