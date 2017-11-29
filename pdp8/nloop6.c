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
    printf("\t  Nested Loop - nloop6.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(FOR) dan Innerloop(DO-WHILE)\n\n");

    ///kamus
    int outer6, inner6;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop6.c\n");
    printf("==========================================\n\n");
    for(outer6=1; outer6<=7; outer6++) ///Outerloop FOR, nilai awal(iterator), nilai akhir, dan nilai pembaruan jadi satu
    { ///Buka kurung kurawal Outerloop FOR
        printf("Perulangan ke-%d\n", outer6); ///Cetak Outerloop FOR
        inner6=1; ///Nilai awal Innerloop DO-WHILE
        do ///Diawali dengan DO
        { ///Buka kurung kurawal Innerloop DO-WHILE
            printf("\tAngka ke-%d\n", inner6); ///Cetak Innerloop DO-WHILE, mencetak sampai kondisi false, baru kembali ke Outerloop
            inner6++; ///Nilai pembaruan Innerloop DO-WHILE
        } ///Tutup kurung kurawal Innerloop DO-WHILE
        while(inner6<=5); ///Innerloop DO-WHILE, hanya terdapat nilai akhir di dalam kurung. Dan terdapat di bawah DO
    } ///Tutup kurung kurawal Outerloop FOR
return 0;
}
