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
    printf("\t    Looping - loop1.c\n");
    printf("==========================================\n");
    printf("loop1: Mencetak Angka 1 hingga 50\n");
    printf("loop2: Mencetak Angka 50 hingga 1\n");
    printf("loop3: Mencetak Selisih loop1 dan loop2\n\n");

    ///kamus
    int loop1, loop2, loop3;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - loop1.c\n");
    printf("==========================================\n");
    printf("loop1 \t\tloop2 \t\tloop3\n\n");
    for(loop1=1, loop2=50; loop1<=50; loop1++)
    {
        if(loop2<loop1)
        {
            loop3=loop1-loop2;
            printf("loop1=%d \tloop2=%d \tloop3(selisih)=%d\n", loop1, loop2--, loop3);
        }

        else
        {
            printf("loop1=%d \tloop2=%d \tloop3(selisih)=%d\n", loop1, loop2--, loop3=loop2-loop1);
        }
    }
}
