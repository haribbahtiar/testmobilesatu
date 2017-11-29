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
    printf("\t    Looping - loop3.c\n");
    printf("==========================================\n");

    ///kamus
    int i, j, batas=10;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - loop3.c\n");
    printf("==========================================\n");
    printf("Masukkan 10 Data Integer\n");
    for(i=1; i<=batas; i++)
    {
        printf("Masukkan Angka [%d] = ", i); scanf("%d", &j);
    }
}
