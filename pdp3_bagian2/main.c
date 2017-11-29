#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("   PDP 3 Bagian 2 Penjualan Toko Cat Semarang Berkilau\n");
    puts("=========================================================");

    /* kamus */
    char nama_konsumen[30];
    float luas_dinding;
    char tanggal_beli[25];
    int harga_cat=25000;
    int per_kaleng=10;
    float jumlah_kaleng;
    float total_harga;

    /* input */
    printf("Masukkan Nama Konsumen\t\t: "); gets(nama_konsumen);
    printf("Masukkan Tanggal Pembelian\t: "); gets(tanggal_beli); fflush(stdin);
    printf("Masukkan Luas Dinding(m2)\t: "); scanf("%f", &luas_dinding);
    printf("Per Kaleng Cat Bisa Dipakai\t: %i m2 \n", per_kaleng);
    printf("Harga Cat Per Kaleng\t\t: Rp %i", harga_cat);

    /* hitung */
    jumlah_kaleng=luas_dinding/per_kaleng;
    total_harga=ceil(jumlah_kaleng)*harga_cat;

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tNota Pembelian\n");
    printf("\t\tToko Cat Semarang Berkilau\n");
    puts("=========================================================");
    printf("Nama Konsumen\t\t\t: %s \n", nama_konsumen);
    printf("Tanggal Pembelian\t\t: %s \n", tanggal_beli); fflush(stdin);
    printf("Luas Dinding Yang Di Cat\t: %.2f m2\n", luas_dinding);
    printf("Kaleng Cat Yang Diperlukan\t: %.1f kaleng\n", jumlah_kaleng);
    printf("Harga Yang Harus Dibayar\t: Rp %.0f\n", total_harga);


    return 0;
}
