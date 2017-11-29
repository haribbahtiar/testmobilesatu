#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Nama\t\t: Muchamad Harib Bahtiar\n");
    printf("NIM\t\t: A11.2017.10317\n");
    printf("Kelompok\t: 4108\n\n");

    ///judul
    printf("==========================================\n");
    printf("\t  Nested Loop - nloop3.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan dengan DO-WHILE\n\n");

    ///kamus
    int nloop3;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop3.c\n");
    printf("==========================================\n\n");
    nloop3=1; ///Nilai awal berada diluar kurung
    do ///Jika menggunakan perulangan DO-WHILE pertama adalah melakukan(DO) jika nilai tidak memenuhi pun, itu akan tetap keluar output, karena sudah DO
    {
        printf("Perulangan ke-%d\n", nloop3);
        nloop3++;
    }
    while(nloop3<=7); /// Kondisi terdapat pada akhir, diluar kurung kurawal
    return 0;
}
