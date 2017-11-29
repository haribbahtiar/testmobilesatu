#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t              Latihan UTS 2\n");
    puts("=========================================================");

    /* kamus */
    char nama[30];
    int lamakerja, tunjangan1, tunjangan2, tunjangan3, pajak1, pajak2, pajak3, bersih1, bersih2, bersih3;

    /* input */
    printf("\n==PROGRAM GAJI KARYAWAN==\n");
    printf("=========================\n");
    printf("Inputkan nama karyawan\t\t\t= "); gets(nama); fflush(stdin);
    printf("Inputkan lama kerja karyawan(tahun)\t= "); scanf("%i", &lamakerja);

    /* hitung */
    tunjangan1=5000000*60/100;
    pajak1=(5000000*10/100)+tunjangan1;
    bersih1=5000000+tunjangan1-pajak1;
    tunjangan2=5000000*40/100;
    pajak2=(5000000*15/100)+tunjangan2;
    bersih2=5000000+tunjangan2-pajak2;
    tunjangan3=5000000*30/100;
    pajak3=(5000000*15/100)+tunjangan3;
    bersih3=5000000+tunjangan3-pajak3;

    /* output */
    printf("\n=========================\n");
    printf("Nama karyawan\t\t= %s\n", nama);
    printf("Lama kerja\t\t= %i\n", lamakerja);
    printf("Gaji pokok karyawan\t= Rp. 5000000\n");
    if(lamakerja>5)
    {
        printf("Tunjangan karyawan\t= Rp. %i\n", tunjangan1);
        printf("Pajak karyawan\t= Rp. %i\n", pajak1);
        printf("Gaji bersih karyawan\t= Rp. %i\n", bersih1);
    }
    else if(lamakerja<=5 && lamakerja>=3)
    {

        printf("Tunjangan karyawan\t= Rp. %i\n", tunjangan2);
        printf("Pajak karyawan\t= Rp. %i\n", pajak2);
        printf("Gaji bersih karyawan\t= Rp. %i\n", bersih2);
    }
    else
    {
        printf("Tunjangan karyawan\t= Rp. %i\n", tunjangan3);
        printf("Pajak karyawan\t= Rp. %i\n", pajak3);
        printf("Gaji bersih karyawan\t= Rp. %i\n", bersih3);
    }
    return 0;
}
