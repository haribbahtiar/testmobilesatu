#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Nama\t\t: Muchamad Harib Bahtiar\n");
    printf("NIM\t\t: A11.2017.10317\n");
    printf("Kelompok\t: 4108\n\n");

    ///judul
    printf("===============================================\n");
    printf("\t    Looping - loop7.c\n");
    printf("===============================================\n");
    printf("Mencetak Nilai 1-100 Yang Terdapat Angka 1\n\n");

    ///kamus
    int i;

    ///program
    printf("===============================================\n");
    printf("\t   Hasilnya - loop7.c\n");
    printf("===============================================\n");
    printf("Nilai 1 - 100 Yang Terdapat Angka 1:\n\n");
    for(i=0; i<=100; i++)
    {
        if(i==0 ||
           i>=2 && i<=10 ||
           i==20 ||
           i>=22 && i<=30 ||
           i>=32 && i<=40 ||
           i>=42 && i<=50 ||
           i>=52 && i<=60 ||
           i>=62 && i<=70 ||
           i>=72 && i<=80 ||
           i>=82 && i<=90 ||
           i>=92 && i<=100)
        {
            continue;
        }
        printf("Angka Mengandung 1\t= %d\n", i);
    }
}
