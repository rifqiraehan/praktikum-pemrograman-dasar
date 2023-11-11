#include <stdio.h>
#include <conio.h>
#include <string.h>

struct tanggal{ // definisi global dari tipe tanggal
    int tgl;
    int bln;
    int thn;
};

struct orang{ // definisi global dari tipe orang
    char nama[30];
    struct tanggal lahir;
};

struct orang siswa; // definisi global variable siswa

void main(){
    // memberikan nilai pada field dari struktur siswa
    strcpy(siswa.nama, "RIFQI RAEHAN HERMAWAN");
    siswa.lahir.tgl = 28;
    siswa.lahir.bln = 04;
    siswa.lahir.thn = 2005;

    printf("NAMA         : %s\n", siswa.nama);
    printf("Tgl Lahir    : %d/%d/%d\n", siswa.lahir.tgl, siswa.lahir.bln, siswa.lahir.thn);

    getch();
}