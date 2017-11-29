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
    printf("\t    Looping - loop5.c\n");
    printf("===============================================\n");
    printf("Mencetak Angka Kelipatan 3 dari 1 hingga 60\n");
    printf("Menjumlah dan Merata-rata\n\n");

    ///kamus
    int i, sum=0, kelipatan3=0;
    float ratarata;

    ///program
    printf("===============================================\n");
    printf("\t   Hasilnya - loop5.c\n");
    printf("===============================================\n");
    printf("Kelipatan 3, dari 1 hingga 60:\n\n");
    for(i=1; i<=60; i++)
    {
        if(i%3==0)
        {
            printf("%d ", i);
            sum=sum+i;
            kelipatan3=kelipatan3+1;
        }
    }
    ratarata=(float)sum/kelipatan3;

    printf("\n\nBanyak Kelipatan 3\t= %d\n", kelipatan3);
    printf("Jumlah perulangan\t= %d\n", sum);
    printf("Rata-rata\t\t= %.2f\n", ratarata);
}
