#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPemahaman 4 - Lahan Bazar\n");
    puts("=========================================================");

    /* kamus */
    float sbazar, pstand=2.5, lstand=2.5, tarif=200000, Lbazar, Lstand, jstand, ubazar;
    int jaslistand;

    /* input */
    printf("Diketahui lahan untuk bazar berbentuk persegi.\n");
    printf("Masukkan sisi lahan bazar(m)\t: "); scanf("%f", &sbazar);
    printf("Diketahui Panjang Per Stand\t: %.2f m\n", pstand);
    printf("Diketahui Lebar Per Stand\t: %.2f m\n", lstand);
    printf("Diketahui Tarif Per Stand\t: Rp %.2f", tarif);

    /* hitung */
    Lbazar=sbazar*sbazar;
    Lstand=pstand*lstand;
    jstand=Lbazar/Lstand;
    jaslistand=floor(jstand);
    ubazar=tarif*25/100*jaslistand;

    puts("\n\n=========================================================");
    printf("\t\tPerhitungan Lahan Stand di Bazar\n");
    puts("=========================================================");
    printf("Luas Lahan Bazar\t\t\t: %.2f m2\n", Lbazar);
    printf("Luas Yang Dibutuhkan Per Stand\t\t: %.2f m2\n", Lstand);
    printf("Jumlah Stand Yang Tertampung\t\t: %i stand\n", jaslistand);
    printf("Keuntungan Yang Didapat\t\t\t: Rp %.2f\n", ubazar);
    printf("Apakah Jumlah Stand Genap?\n");
    if(jaslistand%2==0){
        printf("Jumlah stand ada %i, jadi jumlah stand genap (bernilai 1)\n\n", jaslistand);
    }else{
        printf("Jumlah stand ada %i, jadi jumlah stand ganjil (bernilai 0)\n\n", jaslistand);
    }
    return 0;
}
