#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
   `    Nama   : Muchamad Harib Bahtiar
        NIM    : A11.2017.10317
        Materi : Tipe Data

        PEMAHAMAN 2
    **/

    /* kamus */
    char nama_lengkap[30];
    char kota_asal[30];
    char tanggal_lahir[30];
    int umur;
    char jurusan[30];
    int tahun_angkatan;
    char nim[5];

    /* input */
    printf("============================================\n");
    printf("\tSilakan Melakukan Registrasi\n");
    printf("============================================\n");
    printf("Masukkan Nama\t\t: ");
    scanf("%s",&nama_lengkap);
    printf("Masukkan Kota Asal\t: ");
    scanf("%s",&kota_asal);
    printf("Masukkan Tanggal Lahir\t: ");
    scanf("%s",&tanggal_lahir);
    printf("Masukkan Umur\t\t: ");
    scanf("%i",&umur);
    fflush(stdin);
    printf("Masukkan Jurusan\t: ");
    gets(jurusan);
    printf("Tahun Angkatan\t\t: ");
    scanf("%i",&tahun_angkatan);
    printf("5 Angka Dibelakang NIM\t: ");
    scanf("%s",&nim);

    /* output */
    printf("\n============================================\n");
    printf("\t\tData Diri Pendaftar\n");
    printf("============================================\n");
    printf("Nama\t\t\t:  %s \n", nama_lengkap);
    printf("Kota Asal\t\t:  %s \n", kota_asal);
    printf("Tanggal Lahir\t\t:  %s \n", tanggal_lahir);
    printf("Umur\t\t\t:  %i \n", umur);
    printf("Jurusan\t\t\t:  %s \n", jurusan);
    printf("Tahun Angkatan\t\t:  %i \n", tahun_angkatan);
    printf("5 Angka dibelakang NIM\t:  %s \n", nim);
    return 0;
}
