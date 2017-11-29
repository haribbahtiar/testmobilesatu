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
    printf("\t  Nested Loop - nloop18.c\n");
    printf("==========================================\n");
    printf("Mencetak Angka 8\n\n");

    ///kamus
    int i, k;

    ///program
    printf("==========================================\n");
    printf("\t   Hasilnya - nloop19.c\n");
    printf("==========================================\n");
    for(i=1; i<=5; i++) ///outerloop(baris)
    {
        for(k=1 ;k<=5; k++) ///innerloop(kolom)
        {
            if(i==1 || i==3 || i==5) ///batas outer
            {
                printf("o");
            }
            else if(k==1 || k==5) ///inner
            {
                printf("o");
            }
            else
            {
                printf(" "); ///spasi
            }
        }
        printf("\n");
    }
return 0;
}
