#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPemahaman 4 - Lahan Parkir\n");
    puts("=========================================================");

    /* kamus */
    float sparkir, pmobil=4, lmobil=2.5, tarif=5000, Lparkir, Lmobil, jmobil, uparkir;
    int jaslimobil, kondisi;

    /* input */
    printf("Diketahui lahan parkiran berbentuk persegi.\n");
    printf("Masukkan sisi lahan parkiran(m)\t: "); scanf("%f", &sparkir);
    printf("Diketahui Panjang Per Mobil\t: %.2f m\n", pmobil);
    printf("Diketahui Lebar Per Mobil\t: %.2f m\n", lmobil);
    printf("Diketahui Tarif Per Mobil\t: Rp %.2f", tarif);

    /* hitung */
    Lparkir=sparkir*sparkir;
    Lmobil=pmobil*lmobil;
    jmobil=Lparkir/Lmobil;
    jaslimobil=floor(jmobil);
    uparkir=tarif*jaslimobil;

    /* putput */
    puts("\n\n=========================================================");
    printf("\t\tPerhitungan Lahan Parkir\n");
    puts("=========================================================");
    printf("Luas Lahan Parkiran\t\t\t: %.2f m2\n", Lparkir);
    printf("Luas Yang Dibutuhkan Per Mobil\t\t: %.2f m\n", Lmobil);
    printf("Jumlah Mobil Yang Tertampung\t\t: %i mobil\n", jaslimobil);
    printf("Uang Yang Didapat Jika Parkiran Penuh\t: Rp %.2f\n", uparkir);
    printf("Apakah Jumlah Mobil Ganjil/Genap?\n");
    if(jaslimobil%2==0){
        printf("Jumlah mobil ada %i, jadi jumlah mobil genap (bernilai 0)\n\n", jaslimobil);
    }else{
        printf("Jumlah mobil ada %i, jadi jumlah mobil ganjil (bernilai 1)\n\n", jaslimobil);
    }

    return 0;
}
