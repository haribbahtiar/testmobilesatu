#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t   PDP 3 Bagian 1 Analisa Squential A-B\n");
    puts("=========================================================");

    /* kamus */
    int a=12, b, c;

    /* input */
    printf("Diketahui Nilai A\t= %i\n", a);
    printf("Masukkan Nilai B\t= "); scanf("%i", &b);
    printf("Diketahui C adalah\t= B - A");

    /* hitung */
    c=b-a;

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t  Perhitungan Nilai C\n");
    puts("=========================================================");
    printf("Nilai A\t\t= %i\n", a);
    printf("Nilai B\t\t= %i\n", b);
    printf("Nilai C\t\t= %i\n", c);

    /*
    Baris       A       B       C
    1           null    null    null
    2           12      5       -7
    3           12      4       -8
    4           12      3       -9
    5           12      2       -10
    */

    return 0;
}
