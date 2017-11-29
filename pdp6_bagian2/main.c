#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPDP 6 - Membaca Kode ASCII\n");
    puts("=========================================================");

    /* kamus */
    int kodeascii;

    /* input */
    printf("Masukkkan Kode ASCII\t\t: "); scanf("%i", &kodeascii);

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\Deteksi Kode ASCII\n");
    puts("=========================================================");
    printf("Kode ASCII Yang Anda Masukkan\t: %i\n", kodeascii);
    if(kodeascii>=0 && kodeascii<=31)
    {
        puts("\n\t==========================");
        printf("\t| Kode Control Character |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=32 && kodeascii<=47)
    {
        puts("\n\t=============");
        printf("\t| Character |\n");
        puts("\t=============");
    }
    else if(kodeascii==48)
    {
        puts("\n\t================");
        printf("\t| Angka Netral |\n");
        puts("\t================");
    }
    else if(kodeascii==49 || kodeascii==51 || kodeascii==53 || kodeascii==55 || kodeascii==57)
    {
        puts("\n\t================");
        printf("\t| Angka Ganjil |\n");
        puts("\t================");
    }
    else if(kodeascii==50 || kodeascii==52 || kodeascii==54 || kodeascii==56)
    {
        puts("\n\t===============");
        printf("\t| Angka Genap |\n");
        puts("\t===============");
    }
    else if(kodeascii>=58 && kodeascii<=64)
    {
        puts("\n\t=============");
        printf("\t| Character |\n");
        puts("\t=============");
    }
    else if(kodeascii==65 || kodeascii==69 || kodeascii==73 || kodeascii==79 || kodeascii==85)
    {
        puts("\n\t=======================");
        printf("\t| Huruf Vokal Kapital |\n");
        puts("\t=======================");
    }
    else if(kodeascii>=66 && kodeascii<=68)
    {
        puts("\n\t==========================");
        printf("\t| Huruf Konsonan Kapital |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=70 && kodeascii<=72)
    {
        puts("\n\t==========================");
        printf("\t| Huruf Konsonan Kapital |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=74 && kodeascii<=78)
    {
        puts("\n\t==========================");
        printf("\t| Huruf Konsonan Kapital |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=80 && kodeascii<=84)
    {
        puts("\n\t==========================");
        printf("\t| Huruf Konsonan Kapital |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=86 && kodeascii<=90)
    {
        puts("\n\t==========================");
        printf("\t| Huruf Konsonan Kapital |\n");
        puts("\t==========================");
    }
    else if(kodeascii>=91 && kodeascii<=96)
    {
        puts("\n\t=============");
        printf("\t| Character |\n");
        puts("\t=============");
    }
    else if(kodeascii==97 || kodeascii==101 || kodeascii==105 || kodeascii==111 || kodeascii==117)
    {
        puts("\n\t=====================");
        printf("\t| Huruf Vokal Kecil |\n");
        puts("\t=====================");
    }
    else if(kodeascii>=98 && kodeascii<=100)
    {
        puts("\n\t========================");
        printf("\t| Huruf Konsonan Kecil |\n");
        puts("\t========================");
    }
    else if(kodeascii>=102 && kodeascii<=104)
    {
        puts("\n\t========================");
        printf("\t| Huruf Konsonan Kecil |\n");
        puts("\t========================");
    }
    else if(kodeascii>=106 && kodeascii<=110)
    {
        puts("\n\t========================");
        printf("\t| Huruf Konsonan Kecil |\n");
        puts("\t========================");
    }
    else if(kodeascii>=112 && kodeascii<=116)
    {
        puts("\n\t========================");
        printf("\t| Huruf Konsonan Kecil |\n");
        puts("\t========================");
    }
    else if(kodeascii>=118 && kodeascii<=122)
    {
        puts("\n\t========================");
        printf("\t| Huruf Konsonan Kecil |\n");
        puts("\t========================");
    }
    else if(kodeascii>=123 && kodeascii<=127)
    {
        puts("\n\t=============");
        printf("\t| Character |\n");
        puts("\t=============");
    }
    else if(kodeascii>127)
    {
        puts("\n\t===================================================");
        printf("\t| Kode Tidak Valid, Masukkan Kode Kurang Dari 127 |\n");
        puts("\t===================================================");
    }
    else
    {
        puts("\n\t================================================");
        printf("\t| Kode Tidak Valid, Masukkan Kode Lebih Dari 1 |\n");
        puts("\t================================================");
    }///000-031 control char
    ///032-047 char
    ///048-057 int ganjil genap
    ///058-064 char
    ///065-090 huruf kapital, vokal/konsonan
    ///091-096 char
    ///097-122 huruf kecil, vokal/konsonan
    ///123-127 char
    return 0;
}
