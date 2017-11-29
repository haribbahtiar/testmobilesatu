#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\t    PDP 6 - SEGITIGA\n");
    puts("=========================================================");

    /* kamus */
    float sisi1, sisi2, sisi3, keliling, tinggisamasisi1, tinggisamasisi2, luassamasisi;
    float tinggisamakaki1, tinggisamakaki2, luassamakaki;
    float ssembarang, luassembarang1, luassembarang2;

    /* input */
    printf("*catatan untuk segitiga sama kaki, masukkan sisi yang sama terlebih dahulu.\n");
    printf("Masukkan Sisi Pertama Segitiga(cm)\t: "); scanf("%f", &sisi1);
    printf("Masukkan Sisi Kedua Segitiga(cm)\t: "); scanf("%f", &sisi2);
    printf("Masukkan Sisi Ketiga Segitiga(cm)\t: "); scanf("%f", &sisi3);

    /* hitung */
    keliling=sisi1+sisi2+sisi3;

    tinggisamasisi1=pow(sisi1, 2)-pow(0.5*sisi2, 2);
    tinggisamasisi2=pow(tinggisamasisi1, 0.5);
    luassamasisi=0.5*sisi3*tinggisamasisi2;

    tinggisamakaki1=pow(sisi1, 2)-pow(0.5*sisi3, 2);
    tinggisamakaki2=pow(tinggisamakaki1, 0.5);
    luassamakaki=0.5*sisi3*tinggisamakaki2;

    ssembarang=(sisi1+sisi2+sisi3)/2;
    luassembarang1=ssembarang*(ssembarang-sisi1)*(ssembarang-sisi2)*(ssembarang-sisi3);
    luassembarang2=pow(luassembarang1, 0.5);

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\      PERHITUNGAN\n");
    puts("=========================================================");
    printf("Sisi Pertama Segitiga\t: %.1f cm\n", sisi1);
    printf("Sisi Kedua Segitiga\t: %.1f cm\n", sisi2);
    printf("Sisi Ketiga Segitiga\t: %.1f cm\n", sisi3);
    if(sisi1==sisi2 && sisi2==sisi3)
    {
        printf("\nBerdasarkan sisi yang dimiliki, termasuk dalam:\n\t==================\n\tSegitiga Sama Sisi\n\t==================\n");
        printf("\n\nKeliling segitiga sama sisi di atas adalah = %.2f cm", keliling);
        printf("\n\nTinggi sama sisi = %.2f cm", tinggisamasisi2);
        printf("\n\nLuas segitiga sama sisi = %.2f cm2\n", luassamasisi);
    }
    else if(sisi1==sisi2 || sisi1==sisi3 || sisi2==sisi3)
    {
        printf("\nBerdasarkan sisi yang dimiliki, termasuk dalam:\n\t==================\n\tSegitiga Sama Kaki\n\t==================\n");
        printf("\n\nKeliling segitiga sama kaki di atas adalah = %.1f cm", keliling);
        printf("\n\nTinggi sama kaki = %.2f cm", tinggisamakaki2);
        printf("\n\nLuas segitiga sama kaki = %.2f cm2\n", luassamakaki);
    }
    else
    {
        printf("\nBerdasarkan sisi yang dimiliki, termasuk dalam:\n\t==================\n\tSegitiga Sembarang\n\t==================\n");
        printf("\n\nKeliling segitiga sembarang di atas adalah = %.2f cm", keliling);
        printf("\n\nS segitiga sembarang = %.2f cm", ssembarang);
        printf("\n\nLuas segitiga sembarang = %.2f cm2\n", luassembarang2);
    }

    return 0;
}
