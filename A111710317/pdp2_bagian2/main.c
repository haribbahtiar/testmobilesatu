#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\tPDP 2 Bagian 2 Menghitung Percepatan\n");
    puts("=========================================================");

    /* kamus */
    float kecawal;
    float kecakhir;
    float waktu;
    float percepatan;

    /* program */
    printf("Masukkan Kecepatan Awal Mobil(m/s): ");
    scanf("%f", &kecawal);
    printf("Masukkan Kecepatan Akhir Mobil(m/s): ");
    scanf("%f", &kecakhir);
    printf("Masukkan Waktu Percepatan Mobil(detik): ");
    scanf("%f", &waktu);

    /* rumus */
    percepatan=(kecakhir-kecawal)/waktu;

    /* output */
    puts("\n=========================================================");
    printf("\t\t   Hasil Perhitungan\n");
    puts("=========================================================");
    printf("Kecepatan Awal Mobil: %.2f m/s\n", kecawal);
    printf("Kecepatan Akhir Mobil: %.2f m/s\n", kecakhir);
    printf("Waktu Percepatan Mobil: %.2f detik\n", waktu);
    printf("Percepatan Mobil: %.2f m/s2\n", percepatan);

    return 0;
}
