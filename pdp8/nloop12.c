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
    printf("\t  Nested Loop - nloop12.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(DO-WHILE) dan Innerloop(DO-WHILE)\n\n");

    ///kamus
    int outer12, inner12;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop12.c\n");
    printf("==========================================\n\n");
    outer12=1; ///Nilai awal Outerloop DO-WHILE
    do ///Jika menggunakan perulangan DO-WHILE pertama adalah melakukan(DO) jika nilai tidak memenuhi pun, itu akan tetap keluar output, karena sudah DO
    { ///Kurung buka Outerloop DO-WHILE
        printf("Perulangan ke-%d\n", outer12); ///Cetak Outerloop DO-WHILE
        outer12++; ///Nilai pembaruan Outerloop DO-WHILE
        inner12=1; ///Nilai awal Innerloop DO-WHILE
        do ///Jika menggunakan perulangan DO-WHILE pertama adalah melakukan(DO) jika nilai tidak memenuhi pun, itu akan tetap keluar output, karena sudah DO
        { ///Kurung buka Innerloop DO-WHILE
            printf("\tAngka ke-%d\n", inner12); ///Cetak Innerloop DO-WHILE
            inner12++; ///Nilai pembaruan Innerloop DO-WHILE
        } ///Kurung tutup Innerloop DO-WHILE
        while(inner12<=5); /// Kondisi(nilai akhir) terdapat pada akhir, diluar kurung kurawal
    } ///Kurung tutup Outerloop DO-WHILE
    while(outer12<=7); /// Kondisi(nilai akhir) terdapat pada akhir, diluar kurung kurawal
    return 0;
}
