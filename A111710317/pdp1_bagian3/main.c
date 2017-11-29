#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\tPDP 1 Bagian 3 Analisis Tipe Data Pada Laptop\n");
    puts("=========================================================");

    /* kamus */
    char merk [10];
    char seri [30];
    char prosesor [30];
    int hdd;
    int ram;
    float layar;
    char nama [20];

    /* input */
    printf("Masukkan Nama Anda: "); gets(nama); fflush(stdin);
    printf("Masukkan Merk Laptop: "); scanf("%s", &merk); fflush(stdin);
    printf("Masukkan Seri Laptop: "); gets(seri);
    printf("Masukkan Prosesor Laptop: "); gets(prosesor); fflush(stdin);
    printf("Masukkan Kapasitas Hardisk Laptop(GB): "); scanf("%i", &hdd);
    printf("Masukkan Kapasitas RAM Laptop(GB): "); scanf("%i", &ram);
    printf("Masukkan Ukuran Layar Laptop(inchi): "); scanf("%f", &layar);

    /* output */
    puts("\n=========================================================");
    printf("\t\t   Data Yang Didapat\n");
    puts("=========================================================");
    printf("Nama Anda: %s \n", nama); fflush(stdin);
    printf("Merk Laptop: %s \n", merk); fflush(stdin);
    printf("Seri Laptop: %s \n", seri);
    printf("Prosesor Laptop: %s \n", prosesor); fflush(stdin);
    printf("Kapasitas Hardisk Laptop: %i GB\n", hdd);
    printf("Kapasitas RAM Laptop: %i GB\n", ram);
    printf("Ukuran Layar Laptop: %.2f inchi\n", layar);
    return 0;
}
