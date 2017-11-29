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
    printf("\t    Looping - loop4.c\n");
    printf("==========================================\n");

    ///kamus
    int i, j, batas;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - loop4.c\n");
    printf("==========================================\n");
    printf("Masukkan Banyak Data Integer = "); scanf("%d", &batas);
    for(i=1; i<=batas; i++)
    {
        printf("Masukkan Angka [%d] = ", i); scanf("%d", &j);
    }
}
