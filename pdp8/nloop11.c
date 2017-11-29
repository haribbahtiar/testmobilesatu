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
    printf("\t  Nested Loop - nloop11.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(DO-WHILE) dan Innerloop(WHILE)\n\n");

    ///kamus
    int outer11, inner11;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop11.c\n");
    printf("==========================================\n\n");
    outer11=1; ///Nilai awal Outerloop DO-WHILE
    do ///Jika menggunakan perulangan DO-WHILE pertama adalah melakukan(DO) jika nilai tidak memenuhi pun, itu akan tetap keluar output, karena sudah DO
    { ///Kurung buka Outerloop DO-WHILE
        printf("Perulangan ke-%d\n", outer11); ///Cetak Outerloop DO-WHILE
        outer11++; ///Nilai pembaruan Outerloop DO-WHILE
        inner11=1; ///Nilai awal Innerloop WHILE
        while(inner11<=5) ///Innerloop WHILE yang terdapat didalam kurung hanya nilai akhir
        { ///Kurung buka Innerloop WHILE
            printf("\tAngka ke-%d\n", inner11); ///Cetak Innerloop WHILE
            inner11++; ///Nilai pembaruan Innerloop WHILE
        } ///Kurung tutup Innerloop WHILE
    } ///Kurung tutup Outerloop DO-WHILE
    while(outer11<=7); /// Kondisi terdapat pada akhir, diluar kurung kurawal
    return 0;
}
