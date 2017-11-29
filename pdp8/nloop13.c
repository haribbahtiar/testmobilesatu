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
    printf("\t  Nested Loop - nloop13.c\n");
    printf("==========================================\n");
    printf("Tabel Perkalian\n\n");

    ///kamus
    int angka, batas, pengali, kali;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop13.c\n");
    printf("==========================================\n\n");
    printf("Masukkan Angka Sebegai Pengali = "); scanf("%d", &batas);
    for(angka=batas; angka<=batas; angka++)
    {
        printf("\nPerkalian dengan angka 1-10\n");
        for(pengali=1; pengali<=10; pengali++)
        {
            kali=angka*pengali;
            printf("%d x %d = %d\n", pengali, angka ,kali);
        }
    }
    return 0;
}
