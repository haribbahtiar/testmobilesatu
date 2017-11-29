#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");

    /* kamus */
    int angka1;
    int angka2;
    int jawaban;
    char nama [20];

    /* program */
    printf("Masukkan Nama Anda = ");
    scanf("%s",&nama);
    printf("Masukkan Angka Pertama = ");
    scanf("%i",&angka1);
    printf("Masukkan Angka Kedua = ");
    scanf("%i",&angka2);

    /* rumus */
    printf("Nama Anda = %s \n",nama);
    jawaban = angka1+angka2;
    printf("Jumlahnya = %i",jawaban);
    return 0;
}
