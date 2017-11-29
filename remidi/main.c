#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///kamus
    float pkel, lkel, Lkel, ptang, ltang, Ltang, pker, lker, Lker, banyakker, isidus, harga, totalharga;

    ///algoritma
    printf("Diketahui:\n");
    printf("per dus berisi = 3 keramik\n");
    printf("harga per dus = 85000\n");
    printf("masukkan panjang ruang keluarga = "); scanf("%f", &pkel);
    printf("masukkan lebar ruang keluarga = "); scanf("%f", &lkel);
    printf("masukkan panjang tangga = "); scanf("%f", &ptang);
    printf("masukkan lebar tangga = "); scanf("%f", &ltang);
    printf("masukkan panjang keramik = "); scanf("%f", &pker);
    printf("masukkan lebar keramik = "); scanf("%f", &lker);
    puts("");
    puts("");
    puts("");
    Lkel=pkel*lkel;
    Ltang=ptang*ltang;
    Lker=pker*lker;
    printf("panjang ruang keluarga = %f", pkel);
    printf("lebar ruang keluarga = %f", lkel);
    printf("luas ruang keluarga = %f", Lkel);
    puts("");
    printf("panjang tangga = %f", ptang);
    printf("lebar tangga = %f", ltang);
    printf("luas tangga = %f", Ltang);
    puts("");
    printf("panjang keramik = %f", pker);
    printf("lebar keramik = %f", lker);
    printf("luas keramik = %f", Lker);
    puts("");
    return 0;
}
