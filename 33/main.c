#include <stdio.h>
#include <stdlib.h>
/* Nama: Rio Naufal Rasyad
   NIM : A11.2017.10321
*/
int main()
{
/* kamus */
    int jumlahkipas;
    float listrikkipas=25;
    int jumlahtelevisi;
    float listriktelevisi=75;
    int jumlahkulkas;
    float listrikkulkas=150;
    int jumlahlampu;
    float listriklampu=10;
    float totalkipas;
    float totaltelevisi;
    float totalkulkas;
    float totallampu;
    float totalharian;
    float totalbulanan;
    float hargalistrik;
/* input */
    puts("=============================");
    printf("Kalkulasi Penghitungan Biaya Listrik Bulanan \n");
    puts("=============================");
    puts("");
    printf("Masukkan Jumlah Kipas Dirumah:");
    scanf("%i", &jumlahkipas);
    printf("Masukkan Jumlah Televisi Dirumah:");
    scanf("%i", &jumlahtelevisi);
    printf("Masukkan Jumlah Kulkas Dirumah: ");
    scanf("%i", &jumlahkulkas);
    printf("Masukkan Jumlah Lampu Dirumah: ");
    scanf("%i", &jumlahlampu);

/* kamus */
    totalkipas=(jumlahkipas*listrikkipas)*24
    totalkulkas=(jumlahkulkas*listrikkulkas)*24
    totallampu=(jumlahlampu*listriklampu)*24
    totaltelevisi=(jumlahtelevisi*listriktelevisi)*24
    totalharian=totalkipas+totalkulkas+totallampu+totaltelevisi
    totalbulanan=totalharian*hargalistrik

/* output */
    printf("")



    return 0;
}
