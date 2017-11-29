#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPDP 6 - Membaca Jumlah Inputan\n");
    puts("=========================================================");

    /* kamus */
    int inputangka;


    /* input */
    printf("Masukkan Angka Pilihanmu\t: "); scanf("%i", &inputangka);


    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\Deteksi Bilangan\n");
    puts("=========================================================");
    printf("Angka Yang Anda Masukkan\t: %i\n", inputangka);
    if(inputangka>=1 && inputangka<=9)
    {
        puts("\n\t=======================");
        printf("\t| Itu Bilangan Satuan |\n");
        puts("\t=======================");
    }
    else if(inputangka>=10 && inputangka<=99)
    {
        puts("\n\t========================");
        printf("\t| Itu Bilangan Puluhan |\n");
        puts("\t========================");
    }
    else if(inputangka>=100 && inputangka<=999)
    {
        puts("\n\t========================");
        printf("\t| Itu Bilangan Ratusan |\n");
        puts("\t========================");
    }
    else if(inputangka>=1000 && inputangka<=9999)
    {
        puts("\n\t=======================");
        printf("\t| Itu Bilangan Ribuan |\n");
        puts("\t=======================");
    }
    else if(inputangka>=10000 && inputangka<=99999)
    {
        puts("\n\t=============================");
        printf("\t| Itu Bilangan Puluh Ribuan |\n");
        puts("\t=============================");
    }
    else if(inputangka>=100000 && inputangka<=999999)
    {
        puts("\n\t============================");
        printf("\t| Itu Bilangan Ratus Ribuan |\n");
        puts("\t============================");
    }
    else if(inputangka>=1000000 && inputangka<=9999999)
    {
        puts("\n\t=======================");
        printf("\t| Itu Bilangan Jutaan |\n");
        puts("\t=======================");
    }
    else
    {
        puts("\n\t============================================");
        printf("\t| Angka Tidak Valid, Masukkan Lebih Dari 1 |\n");
        puts("\t============================================");
    }

    return 0;
}
