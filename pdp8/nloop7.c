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
    printf("\t  Nested Loop - nloop7.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(WHILE) dan Innerloop(FOR)\n\n");

    ///kamus
    int outer7, inner7;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop7.c\n");
    printf("==========================================\n\n");
    outer7=1; ///Nilai awal Outerloop WHILE
    while(outer7<=7) ///Outerloop WHILE, karena WHILE didalam kurung hanya terdapat syarat nilai akhir
    { ///Kurung buka Outerloop WHILE
        printf("Perulangan ke-%d\n", outer7); ///Cetak Outerloop WHILE
        outer7++; ///Nilai pembaruan Outerloop WHILE
        for(inner7=1; inner7<=5; inner7++) ///Innerloop FOR, didalam kurung terdapat nilai awal(iterator), nilai akhir(syarat kondisi), dan nilai pembaruan.
        { ///Kurung Buka Innerloop FOR
            printf("\tAngka ke-%d\n", inner7); ///Cetak Innerloop FOR
        } ///Kurung tutup Innerloop FOR
    } ///Kurung tutup Outerloop WHILE
return 0;
}
