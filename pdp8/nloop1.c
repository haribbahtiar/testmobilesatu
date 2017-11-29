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
    printf("\t  Nested Loop - nloop1.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan dengan FOR\n\n");

    ///kamus
    int nloop1;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop1.c\n");
    printf("==========================================\n\n");
    for(nloop1=1; nloop1<=7; nloop1++) ///Jika menggunakan perulangan FOR, kondisi awal(iterator), kondisi akhir, dan pembaruan nilai berada pada satu kurung
    {
        printf("Perulangan ke-%d\n", nloop1); ///Jika memenuhi kondisi diatas, akan run program yang di dalam kurung kurawal berulang terus hingga kondisi akhir
    }
    return 0;
}
