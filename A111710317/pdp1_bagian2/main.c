#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\tPDP 1 Bagian 2 Keliling dan Luas Segitiga\n");
    puts("=========================================================");

    /* kamus */
    float sisi;
    float alas;
    float tinggi;
    float keliling;
    float luas;

    /* program */
    printf("Masukkan Sisi Segitiga(cm): ");
    scanf("%f", &sisi);
    printf("Masukkan Alas Segitiga(cm): ");
    scanf("%f", &alas);
    printf("Masukkan Tinggi Segitiga(cm): ");
    scanf("%f", &tinggi);

    /* rumus */
    keliling=sisi+sisi+sisi;
    luas=alas*tinggi*1/2;

    /* output */
    puts("\n=========================================================");
    printf("\t\t   Hasil Perhitungan\n");
    puts("=========================================================");
    printf("Sisi Segitiga: %.2f cm\n", sisi);
    printf("Alas Segitiga: %.2f cm\n", alas);
    printf("Tinggi Segitiga: %.2f cm\n", tinggi);
    printf("Keliling Segitiga: %.2f cm\n",keliling);
    printf("Luas Segitiga: %.2f cm2\n",luas);
    return 0;
}
