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
    printf("\t  Nested Loop - nloop14.c\n");
    printf("==========================================\n");
    printf("Tabel Matriks Angka\n\n");

    ///kamus
    int baris, kolom, outerm, innerm;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop14.c\n");
    printf("==========================================\n");
    printf("Masukkan Batas Baris = "); scanf("%d", &baris);
    printf("Masukkan Batas Kolom = "); scanf("%d", &kolom);
    for(outerm=1; outerm<=baris; outerm++)
    {
        for(innerm=1; innerm<=kolom; innerm++)
        {
            printf("%d%d ", outerm ,innerm);
        }
        printf("\n");
    }
    return 0;
}
