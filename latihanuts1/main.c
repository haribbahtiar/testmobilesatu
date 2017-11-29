#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    ///Judul Program Memperbaiki Program
    puts("==============================");
    puts("PROGRAM 1 - DATA MAHASISWA");

    ///Kamus
    char nama[100], alamat[100], nim[20], predikat;
    int umur;
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir, ipk;
    bool predikat_a;

    ///Algoritma
    printf("Masukkan Nama = "); gets(nama);
    printf("Masukkan NIM = "); gets(nim);
    printf("Masukkan Alamat = "); gets(alamat); fflush(stdin);
    printf("Masukkan Umur = "); scanf("%i", &umur);
    printf("Masukkan Nilai Tugas = "); scanf("%f", &nilai_tugas);
    printf("Masukkan Nilai UTS = "); scanf("%f", &nilai_uts);
    printf("Masukkan Nilai UAS = "); scanf("%f", &nilai_uas);
    printf("Masukkan IPK = "); scanf("%f", &ipk); fflush(stdin);
    printf("Masukkan Predikat = "); scanf("%c", &predikat);

    ///Output
    puts("\n\n=========================================================");
    printf("\t\t\tKelulusan\n");
    puts("=========================================================");
    printf("Nama Mahasiswa = %s\n", nama);
    printf("NIM = %s\n", nim);
    printf("Alamat = %s\n", alamat); fflush(stdin);
    printf("Umur Mahasiswa = %i\n", umur);
    printf("Nilai Tugas = %.2f\n", nilai_tugas);
    printf("Nilai UTS = %.2f\n", nilai_uts);
    printf("Nilai UAS = %.2f\n", nilai_uas);

    nilai_akhir=(0.5*nilai_tugas)+(0.3*nilai_uts)+(0.2*nilai_uas);

    printf("Nilai Akhir = %.2f\n", nilai_akhir);
    printf("IPK = %.2f\n", ipk);
    if(ipk>=3.51 && ipk<=4.00)
    {
        printf("***Kelulusan = Dengan Pujian***\n");
    }
    else if(ipk>=2.76 && ipk<=3.50)
    {
        printf("***Kelulusan = Sangat Memuaskan***\n");
    }
    else if(ipk>=2.75 && ipk<=2.00)
    {
        printf("***Kelulusan = Memuaskan***\n");
    }
    else
    {
        printf("***Eror!!***\n");
    }
    printf("PREDIKAT = %c\n", predikat);

    predikat_a=ipk>3.50;

    printf("Apakah %s mendapatkan Predikat \"A\"? %d (1=YA / 0=TIDAK)\n", nama, predikat_a);

    return 0;
}
