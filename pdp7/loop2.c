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
    printf("\t    Looping - loop2.c\n");
    printf("==========================================\n");
    printf("Mencetak Angka Kelipatan 2 dari 0 hingga 100\n\n");

    ///kamus
    int i;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - loop2.c\n");
    printf("==========================================\n");
    printf("Kelipatan 2, dari 0 hingga 100\n\n");
    for(i=0; i<=100; i+=2)
    {
        printf("%d\n", i);
    }
}
