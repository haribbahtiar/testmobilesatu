#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t   PDP 3 Bagian 3 Menghitung Volume\n");
    puts("=========================================================");

    /* kamus */
    float diameter_lingkaran=4.00;
    float jari_lingkaran=2.00;
    float tinggi_tabung=12.00;
    float phi=3.14;
    float volume_kelereng;
    float volume_tabung;
    float volume_setlingkaran;
    float volume_total;
    float volume_tumpah;

    /* input */
    printf("Diketahui Diameter Lingkaran\t= %.2f cm\n", diameter_lingkaran);
    printf("Diketahui Jari-Jari Lingkaran\t= %.2f cm\n", jari_lingkaran);
    printf("Memakai Phi\t\t\t= %.2f\n", phi);
    printf("Masukkan Volume Kelereng(cm3)\t= "); scanf("%f", &volume_kelereng);

    /* rumus */
    volume_tabung=phi*pow(jari_lingkaran, 2)*tinggi_tabung;
    volume_setlingkaran=4/3*phi*jari_lingkaran*jari_lingkaran*jari_lingkaran*0.5;
    volume_total=volume_tabung+volume_setlingkaran;

    /* output */
    puts("\n\n=========================================================");
    printf("\t        Volume Benda Yang Dihitung\n");
    puts("=========================================================");
    printf("Diameter Lingkaran\t\t= %.2f cm\n", diameter_lingkaran);
    printf("Jari-Jari Lingkaran\t\t= %.2f cm\n", jari_lingkaran);
    printf("Phi\t\t\t\t= %.2f\n", phi);
    printf("Volume Tabung\t\t\t= %.2f cm3\n", volume_tabung);
    printf("Volume Setengah Lingkaran\t= %.2f cm3\n", volume_setlingkaran);
    printf("Volume Total\t\t\t= %.2f cm3\n", volume_total);

    puts("\n\n=========================================================");
    printf("\t      Volume Air Yang Tumpah\n");
    puts("=========================================================");
    printf("Volume Kelereng Yang Dimasukkan\t= %.2f cm3\n", volume_kelereng);
    printf("Volume Air Yang Tumpah\t\t= %.2f cm3\n", volume_kelereng);
    printf("Karena Sesuai Hukum Archimedes, volume benda yang masuk\n");
    printf("sama dengan volume air yang tumpah.\n");

    return 0;
}
