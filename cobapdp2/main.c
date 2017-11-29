#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");

    /* kamus */
    int celcius;
    int celtofah;
    int celtokel;
    int celtorea;
    char nama [20];

   /* program */
   printf("Masukkan Nama Anda = ");
   scanf("%s",&nama);
   printf("Masukkan Suhu Celcius = ");
   scanf("%i",&celcius);

   /* rumus */
   celtofah=celcius*9/5+32;
   celtokel=celcius+273;
   celtorea=celcius*4/5;

   /* output */
   printf("Nama Anda = %s \n",nama);
   printf("Suhu Celcius = %i \n",celcius);
   printf("Suhu Dikonversi ke Fahrenheit = %i \n",celtofah);
   printf("Suhu Dikonversi ke Kelvin = %i \n",celtokel);
   printf("Suhu Dikonversi ke Reamur = %i \n",celtorea);

    return 0;
}
