#include <stdio.h>
#include <conio.h>

struct bln{
    int jumlah;
    char nama[3];
};

void main(){
    int i;
    static struct bln bulan[12] = {
        {31, 'J', 'a', 'n'}, {28, 'F', 'e', 'b'},
        {31, 'M', 'a', 'r'}, {30, 'A', 'p', 'r'},
        {31, 'M', 'e', 'i'}, {30, 'J', 'u', 'n'},
        {31, 'J', 'u', 'l'}, {31, 'A', 'g', 's'},
        {30, 'S', 'e', 'p'}, {31, 'O', 'k', 't'},
        {30, 'N', 'o', 'v'}, {31, 'D', 'e', 's'}
    };

    printf("Bulan           Jumlah hari\n");
    printf("------          -----------\n");
    for(i=0; i<12; i++){
        printf("%c%c", bulan[i].nama[0], bulan[i].nama[1]);
        printf("%c\t\t%d\n", bulan[i].nama[2], bulan[i].jumlah);
    }

    getch();
}