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
    printf("\t  Nested Loop - nloop2.c\n");
    printf("==========================================\n");
    printf("Mencetak perulangan dengan WHILE\n\n");

    ///kamus
    int nloop2; ///Nilai awal(iterator) sudah ditentukan di kamus

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop2.c\n");
    printf("==========================================\n\n");
    nloop2=1; ///Nilai awal(iterator) pada looping WHILE
    while(nloop2<=7) ///Jika menggunakan perulangan WHILE, di dalam kurung hanya terdapat kondisi akhir
    {
        printf("Perulangan ke-%d\n", nloop2); ///Cetak
        nloop2++; ///Nilai pembaruan terdapat di dalam kurung kurawal
    }
    return 0;
}
