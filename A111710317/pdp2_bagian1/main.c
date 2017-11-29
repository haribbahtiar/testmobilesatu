#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\tPDP 2 Bagian 1 Menkonversi Derajat\n");
    puts("=========================================================");

    /* kamus */
    float celcius;
    float celtofah;
    float celtokel;
    float celtorea;

    /* program */
    printf("Masukkan Suhu Celcius(C): "); scanf("%f",&celcius);

    /* rumus */
    celtofah=celcius*9/5+32;
    celtokel=celcius+273;
    celtorea=celcius*4/5;

    /* output */
    puts("\n=========================================================");
    printf("\t\t   Hasil Konversi\n");
    puts("=========================================================");
    printf("Suhu Celcius: %.2f C\n",celcius);
    printf("Suhu Dikonversi ke Fahrenheit: %.2f F\n",celtofah);
    printf("Suhu Dikonversi ke Kelvin: %.2f K\n",celtokel);
    printf("Suhu Dikonversi ke Reamur: %.2f R\n",celtorea);
    return 0;
}
