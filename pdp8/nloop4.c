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
    printf("\t  Nested Loop - nloop4.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan bersarang, dengan Outerloop(FOR) dan Innerloop(FOR)\n\n");

    ///kamus
    int outer4, inner4;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop4.c\n");
    printf("==========================================\n\n");
    for(outer4=1; outer4<=7; outer4++) ///Outerloop FOR, jika memenuhi ngerjakan yang ada di dalam kurung kurawal
    { ///Buka kurung kurawal Outerloop
        printf("Perulangan ke-%d\n", outer4); ///Cetak kondisi outerloop
        for(inner4=1; inner4<=5; inner4++) ///Innerloop FOR
        { ///Buka kurung kurawal Innerloop
            printf("\tAngka ke-%d\n", inner4); ///Cetak kondisi Innerloop, menyelesaikan perulangan Innerloop terlebih dahulu baru kembali ke Outerloop
        } ///Tutup kurung kurawal Innerloop
    } ///Tutup kurung kurawal Outerloop
return 0;
}
