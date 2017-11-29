#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t       PDP 4 - Diskon Pembelian Cat\n");
    puts("=========================================================");

    /* kamus */
    char namakonsumen[30], tanggalbeli[25];
    int hargacat=25000, perkaleng=10, hargacatdiskon, jumlahkaleng, totalharga;
    float luasdinding, jaslikaleng;

    /* input */
    printf("Diketahui Per Kaleng Bisa Digunakan Seluas\t: %i m2\n", perkaleng);
    printf("Diketahui Harga Normal Cat Per Kaleng\t\t: Rp %i\n", hargacat);
    printf("Masukkan Nama Konsumen\t\t\t\t: "); gets(namakonsumen);
    printf("Masukkan Tanggal Pembelian\t\t\t: "); gets(tanggalbeli); fflush(stdin);
    printf("Masukkan Luas Dinding(m2)\t\t\t: "); scanf("%f", &luasdinding);

    /* hitung */
    jaslikaleng=luasdinding/perkaleng;
    jumlahkaleng=ceil(jaslikaleng);
    if(jumlahkaleng>=1 && jumlahkaleng<=10)
    {
        hargacat=25000;
    }
    else if(jumlahkaleng>=11 && jumlahkaleng<=25)
    {
        hargacat=24500;
    }
    else if(jumlahkaleng>=26 && jumlahkaleng<=50)
    {
        hargacat=23000;
    }
    else
    {
        hargacat=22000;
    }
    totalharga=jumlahkaleng*hargacat;
    hargacatdiskon=totalharga/jumlahkaleng;

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tNota Pembelian\n");
    printf("\t\tToko Cat Semarang Berkilau\n");
    puts("=========================================================");
    printf("Nama Konsumen\t\t\t\t\t: %s\n", namakonsumen);
    printf("Tanggal Pembelian\t\t\t\t: %s\n", tanggalbeli); fflush(stdin);
    printf("Luas Dinding Yang Di Cat\t\t\t: %.1f m2\n", luasdinding);
    printf("Jadi Kaleng Cat Yang Dibutuhkan\t\t\t: %i kaleng\n", jumlahkaleng);
    printf("Harga Per Kaleng Sesuai Diskon Menjadi\t\t: Rp %i\n", hargacatdiskon);
    printf("Jadi Total Harga Yang Harus Dibayar\t\t: Rp %i\n", totalharga);
    return 0;
}
