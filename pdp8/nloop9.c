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
    printf("\t  Nested Loop - nloop9.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(WHILE) dan Innerloop(DO-WHILE)\n\n");

    ///kamus
    int outer9, inner9;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop9.c\n");
    printf("==========================================\n\n");
    outer9=1; ///Nilai awal Outerloop WHILE
    while(outer9<=7) ///Outerloop WHILE, karena WHILE didalam kurung hanya terdapat syarat nilai akhir
    { ///Kurung buka Outerloop WHILE
        printf("Perulangan ke-%d\n", outer9); ///Cetak Outerloop WHILE
        outer9++; ///Nilai pembaruan Outerloop WHILE
        inner9=1; ///Nilai awal Innerloop DO-WHILE
        do ///Diawali dengan DO
        { ///Kurung Buka Innerloop DO-WHILE
            printf("\tAngka ke-%d\n", inner9); ///Cetak Innerloop DO-WHILE
            inner9++; ///Nilai pembaruan Innerloop DO-WHILE
        } ///Kurung tutup Innerloop DO-WHILE
        while(inner9<=5); ///Innerloop DO-WHILE, hanya terdapat nilai akhir di dalam kurung. Dan terdapat di bawah DO
    } ///Kurung tutup Outerloop WHILE
return 0;
}
