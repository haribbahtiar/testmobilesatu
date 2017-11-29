#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("    PDP 2 Bagian 3 Menghitung Keterlambatan Mahasiswa\n");
    puts("=========================================================");

    /* kamus */
    int masuk_jam, masuk_menit, masuk_detikjam, masuk_detikmenit, masuk_detik;
    int hadir_jam, hadir_menit, hadir_detikjam, hadir_detikmenit, hadir_detik;
    int terlambat, detik_ke_menit, menit_ke_jam, menit_ke_jam2;
    masuk_jam = 8;
    masuk_menit = 40;
    masuk_detikjam = masuk_jam*3600;
    masuk_detikmenit = masuk_menit*60;
    masuk_detik = masuk_detikjam+masuk_detikmenit;
    char nama [20];

    /* program */
    printf("-Waktu Masuk Kelas-\n");
    printf("Waktu Masuk Default\t\t: %.0d:%.0d WIB\n", masuk_jam, masuk_menit);
    printf("Masukkan Nama Anda\t\t: "); scanf("%s", &nama);
    printf("\n-Waktu Kehadiran-\n");
    printf("Masukan Jam Hadir Mahasiswa\t: "); scanf("%d", &hadir_jam);
    printf("Masukan Menit Hadir Menit Hadir\t: "); scanf("%d", &hadir_menit);

    /* rumus */
    hadir_detikjam = hadir_jam*3600;
    hadir_detikmenit = hadir_menit*60;
    hadir_detik = hadir_detikjam+hadir_detikmenit;
    terlambat = hadir_detik-masuk_detik;

    /* output */
    puts("\n=========================================================");
    printf("\t\tPerhitungan Keterlambatan\n");
    puts("=========================================================");
    printf("Nama Anda: %s \n", nama);
    printf("Waktu Masuk Default\t\t: %.0d:%.0d WIB\n",masuk_jam, masuk_menit);
    printf("Waktu Mahasiswa Datang\t\t: %.0d:%.0d WIB\n", hadir_jam, hadir_menit);
    if(terlambat>0) {
        printf("\nMahasiswa Terlambat Selama\n");
        printf("Dalam Detik\t\t\t: %.0d s\n", terlambat);
        if(terlambat>=60) {
            detik_ke_menit = terlambat/60;
            printf("Dalam Menit\t\t\t: %d Menit\n", detik_ke_menit);
            }
        if(detik_ke_menit>=60) {
            menit_ke_jam = detik_ke_menit/60;
            menit_ke_jam2 = detik_ke_menit%60;
            printf("Dalam Jam\t\t\t: %d Jam %d Menit\n\n", menit_ke_jam,menit_ke_jam2);
            }
    }

    return 0;
}
