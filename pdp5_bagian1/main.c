#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPDP 5 - Pengajuan Beasiswa\n");
    puts("=========================================================");

    /* kamus */
    char namamahasiswa[30], nim[20], alamat[30], namaayah[30], namaibu[30], pekerjaanayah[30], pekerjaanibu[30];
    float ipk;
    int semester, gajiayah, gajiibu, totalgaji;

    /* input */
    printf("Masukkan Nama Mahasiswa\t\t: "); gets(namamahasiswa);
    printf("Masukkan NIM\t\t\t: "); gets(nim);
    printf("Masukkan Alamat\t\t\t: "); gets(alamat);
    printf("Masukkan Nama Ayah\t\t: "); gets(namaayah); fflush(stdin);
    printf("Masukkan Gaji Ayah(Rp)\t\t: "); scanf("%i", &gajiayah); fflush(stdin);
    printf("Masukkan Nama Ibu\t\t: "); gets(namaibu); fflush(stdin);
    printf("Masukkan Gaji Ibu(Rp)\t\t: "); scanf("%i", &gajiibu);
    printf("Masukkan IPK\t\t\t: "); scanf("%f", &ipk);
    printf("Masukkan Semester\t\t: "); scanf("%i", &semester);

    /* hitung */
    totalgaji=gajiayah+gajiibu;

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tBeasiswa\n");
    puts("=========================================================");
    printf("Nama Mahasiswa\t\t: %s\n", namamahasiswa);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Alamat Mahasiswa\t: %s\n", alamat);
    printf("Nama Ayah\t\t: %s\n", namaayah); fflush(stdin);
    printf("Gaji Ayah\t\t: %i\n", gajiayah); fflush(stdin);
    printf("Nama Ibu\t\t: %s\n", namaibu); fflush(stdin);
    printf("Gaji Ibu\t\t: %i\n", gajiibu);
    printf("IPK Anda\t\t: %.2f\n", ipk);
    printf("Semester Anda\t\t: %i\n", semester);
    printf("Gaji Orang Tua\t\t: Rp %i\n", totalgaji);
    if(ipk>3.00 && semester>=5 && totalgaji<=3000000)
    {
        puts("\n\t===================");
        printf("\t|Memenuhi Beasiswa|\n");
        puts("\t===================");
    }
    else
    {
        if(ipk<=3.00)
        {
            puts("\n\t=====================================");
            printf("\t|Maaf Tidak Memenuhi Syarat Beasiswa|\n");
            puts("\t=====================================");
        }
        else
        {
            if(semester<5)
            {
                puts("\n\t=====================================");
                printf("\t|Maaf Tidak Memenuhi Syarat Beasiswa|\n");
                puts("\t=====================================");
            }
            else
            {
                if(totalgaji>3000000)
                {
                    puts("\n\t=====================================");
                    printf("\t|Maaf Tidak Memenuhi Syarat Beasiswa|\n");
                    puts("\t=====================================");
                }
                else
                {
                    puts("\n\t===================");
                    printf("\t|Memenuhi Beasiswa|\n");
                    puts("\t===================");
                }
            }
        }
    }

    return 0;
}
