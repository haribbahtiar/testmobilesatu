#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Nama\t\t: Muchamad Harib Bahtiar\n");
    printf("NIM\t\t: A11.2017.10317\n");
    printf("Kelompok\t: 4108\n\n");

    ///judul
    printf("===============================================\n");
    printf("\t    Looping - loop8.c\n");
    printf("===============================================\n");
    printf("Menghitung Keuntungan Menjual Telur\n");
    printf("Diketahui per kilogram berisi 16 butir telur\n");
    printf("Diketahui harga telur per kilogram Rp. 14500\n");
    printf("Diketahui membeli 3 ekor ayam Rp. 450000\n");
    printf("Diketahui per bulan merawat 3 ekor ayam Rp. 200000\n\n");

    ///kamus
    int bulan, butir, umur, kgtelur, isisatukg=16, hargasatukg=14500, modalayam=450000, uangpakan=200000, untung;

    ///program
    printf("===============================================\n");
    printf("\t   Hasilnya - loop8.c\n");
    printf("===============================================\n");
    printf("\n\t\t===TOKO TELUR HORN PERKASA===\n");
    printf("\t Perhitungan Keuntungan Adalah:\n");
    printf("\t Jumlah Telur Tiap Bulan  : \n");
    butir=0;
    umur=3;
    printf("\t Bulan ke-1. Umur 3 bulan = 0 telur\n");
    for(bulan=2; bulan<=18; bulan++)
    {
        umur=umur+1;
        butir=butir+270;
        printf("\t Bulan ke-%d. Umur %d bulan = %d telur\n", bulan, umur, butir);
    }
        printf("\n\t\t===KEUNTUNGAN HORN PERKASA===\n");
        printf("\t\ Total Telur Yang Dihasilkan = %d butir\n", butir);

        kgtelur=butir/16;
        printf("\t Jumlah Telur(kg) = %d kg\n", kgtelur);

        untung=(kgtelur*hargasatukg)-(uangpakan*18+modalayam);
        printf("\t Keuntungan Yang Diperoleh = Rp %d\n", untung);
}
