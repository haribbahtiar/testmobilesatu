#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///DEKLARASI
    int tahun;

    ///program
    printf("Masukkan Tahun = \n"); scanf("%i", &tahun);
    if(tahun%400==0)
    {
        printf("Tahum Kabisat");
    }
    else
    {
        if(tahun%100==0)
        {
            printf("Bukan Tahun Kabisat");
        }
        else
        {
            if(tahun%4==0)
            {
                printf("Tahum Kabisat");
            }
            else
            {
                printf("Bukan Tahun Kabisat");
            }
        }
    }

    return 0;
}
