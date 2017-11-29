#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nama\t\t: Muchamad Harib Bahtiar\n");
    printf("NIM\t\t: A11.2017.10317\n");
    printf("Kelompok\t: 4108\n\n");

    ///judul
    printf("==========================================\n");
    printf("\t  Nested Loop - nloop18.c\n");
    printf("==========================================\n");

    ///kamus
    int x,y,z;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop18.c\n");
    printf("==========================================\n");
    for (y=1; y<=5; y++)
    {
        for (z=1; z<=y; z++)
        {
            printf(" ");
        }
        for (x=y; x<=5; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
