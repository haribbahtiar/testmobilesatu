#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("Hello world!\n");
    int nilai;
    nilai=76;
    if (nilai>=75)
    {
        printf("Coba lagi\n");
    }

    int bil;
    bil=0;
    if (bil>0)
    {
        printf("bilangan positif\n");
    }
    else if(bil<0)
    {
        printf("bilangan negatif\n");
    }
    else
    {
        printf("bilangan = 0\n");
    }

    ///klebu or ora
    bool sopan,kartu;
    sopan = false;
    kartu = false;
    if (sopan == true && kartu == true)
    {
        printf("klebu\n");
    }
    else if (sopan == true && kartu == false)
    {
        printf("ra klebu\n");
    }
    else if (sopan == false && kartu == true)
    {
        printf("saru\n");
    }
    else
    {
        printf("pekok\n");
    }

    ///menggunakan switch case
    int angka= 5;
    switch(angka)
    {
    case 1:
        printf("angkamu one");
        break;
    case 2:
        printf("angkamu two");
        break;
    default:
        printf("not one two");
    }
    return 0;
}
