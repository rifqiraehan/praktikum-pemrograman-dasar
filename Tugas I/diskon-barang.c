#include <stdio.h>

int main(){
    double hargaCPU, hargaRAM, hargaMB, hargaDiskonCPU, hargaDiskonRAM, hargaDiskonMB, diskonCPU, diskonRAM, diskonMB, totalBayar;

    hargaCPU =  700.000;
    hargaRAM =  380.000;
    hargaMB =  800.000;

    diskonCPU = 5;
    diskonRAM = 10;
    diskonMB = 8;

    hargaDiskonCPU = hargaCPU - ((diskonCPU / 100) * hargaCPU);
    hargaDiskonRAM = hargaRAM - ((diskonRAM / 100) * hargaRAM);
    hargaDiskonMB =  hargaMB - ((diskonMB / 100) * hargaMB);

    totalBayar = hargaDiskonCPU + hargaDiskonRAM + hargaDiskonMB;

    printf("-------------------------------------------------------------------------\n");
    printf("| No.|    Nama Barang    |   Harga   |  Diskon  | Harga Setelah Diskon  |\n");
    printf("-------------------------------------------------------------------------\n");
    printf("| 1. | CPU 850 Mhz       | %.3lf,- | %.0lf%%       |  %.3lf,-            |\n", hargaCPU, diskonCPU, hargaDiskonCPU);
    printf("| 2. | RAM 128 Mhz       | %.3lf,- | %.0lf%%      |  %.3lf,-            |\n", hargaRAM, diskonRAM, hargaDiskonRAM);
    printf("| 3. | Motherboard PIII  | %.3lf,- | %.0lf%%       |  %.3lf,-            |\n", hargaMB, diskonMB, hargaDiskonMB);
    printf("-------------------------------------------------------------------------\n");
    printf("| Total Harga Dibayar                           | %.3f,-            |\n", totalBayar);
    printf("-------------------------------------------------------------------------\n");

    return 0;
}