#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char anggota[1000];
    int jumlahAnggota = 0, jumlahAnggotaSpesial = 0;

    printf("Masukkan anggota (enter dua kali untuk konfirmasi):\n");

    // Membaca anggota dan menghentikan input jika enter dua kali
    while (scanf("%[^\n]%*c", anggota) == 1) {
        jumlahAnggota++;

        // Menghitung jumlah anggota spesial
        if (strchr(anggota, '$') != NULL) {
            jumlahAnggotaSpesial++;
        }
    }

    // Menampilkan jumlah anggota
    printf("Jumlah anggota: %d\n", jumlahAnggota);
    printf("Jumlah anggota spesial: %d\n", jumlahAnggotaSpesial);

    return 0;
}