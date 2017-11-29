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
    printf("\t  Nested Loop - nloop5.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(FOR) dan Innerloop(WHILE)\n\n");

    ///kamus
    int outer5, inner5;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop5.c\n");
    printf("==========================================\n\n");
    for(outer5=1; outer5<=7; outer5++) ///Outerloop FOR, nilai awal(iterator), nilai akhir, dan nilai pembaruan jadi satu
    { ///Buka kurung kurawal Outerloop FOR
        printf("Perulangan ke-%d\n", outer5); ///Cetak Outerloop FOR
        inner5=1; ///Nilai awal Innerloop WHILE
        while(inner5<=5) ///Innerloop WHILE, hanya terdapat nilai akhir di dalam kurung
        { ///Buka kurung kurawal Innerloop WHILE
            printf("\tAngka ke-%d\n", inner5); ///Cetak Innerloop WHILE, mencetak sampai kondisi false, baru kembali ke Outerloop
            inner5++; ///Nilai pembaruan Innerloop WHILE
        } ///Tutup kurung kurawal Innerloop WHILE
    } ///Tutup kurung kurawal Outerloop FOR
return 0;
}
