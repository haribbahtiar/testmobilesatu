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
    printf("\t  Nested Loop - nloop10.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(DO-WHILE) dan Innerloop(FOR)\n\n");

    ///kamus
    int outer10, inner10;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop10.c\n");
    printf("==========================================\n\n");
    outer10=1; ///Nilai awal Outerloop DO-WHILE
    do ///Jika menggunakan perulangan DO-WHILE pertama adalah melakukan(DO) jika nilai tidak memenuhi pun, itu akan tetap keluar output, karena sudah DO
    { ///Kurung buka Outerloop DO-WHILE
        printf("Perulangan ke-%d\n", outer10); ///Cetak Outerloop DO-WHILE
        outer10++; ///Nilai pembaruan Outerloop DO-WHILE
        for(inner10=1; inner10<=5; inner10++) ///Innerloop menggunakan FOR, maka nilai awal(iterator)=1, nilai akhir=5, dan  pembaruan nilai berada di dalam kurung
        { ///Kurung buka Innerloop FOR
            printf("\tAngka ke-%d\n", inner10); ///Cetak Innerloop FOR
        } ///Kurung tutup Innerloop FOR
    } ///Kurung tutup Outerloop DO-WHILE
    while(outer10<=7); /// Kondisi terdapat pada akhir, diluar kurung kurawal
    return 0;
}
