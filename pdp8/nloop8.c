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
    printf("\t  Nested Loop - nloop8.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(WHILE) dan Innerloop(WHILE)\n\n");

    ///kamus
    int outer8, inner8;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop8.c\n");
    printf("==========================================\n\n");
    outer8=1; ///Nilai awal Outerloop WHILE
    while(outer8<=7) ///Outerloop WHILE, karena WHILE didalam kurung hanya terdapat syarat nilai akhir
    { ///Kurung buka Outerloop WHILE
        printf("Perulangan ke-%d\n", outer8); ///Cetak Outerloop WHILE
        outer8++; ///Nilai pembaruan Outerloop WHILE
        inner8=1; ///Nilai awal Innerloop WHILE
        while(inner8<=5) ///Innerloop WHILE, karena WHILE didalam kurung hanya terdapat syarat nilai akhir
        { ///Kurung Buka Innerloop WHILE
            printf("\tAngka ke-%d\n", inner8); ///Cetak Innerloop WHILE
            inner8++; ///Nilai pembaruan Innerloop WHILE
        } ///Kurung tutup Innerloop WHILE
    } ///Kurung tutup Outerloop WHILE
return 0;
}
