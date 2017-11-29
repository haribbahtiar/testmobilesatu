#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menupilihan, porsi, subpahe1, subpahe2, subpahe3;

    printf("MENU MAMAM\n");
    printf("PaHe 1: Nasi + Ayam Geprek + Es Teh\t\t|\t@Rp 10000\n");
    printf("PaHe 2: Nasi + Ayam Kremes + Es Teh\t\t|\t@Rp 15000\n");
    printf("PaHe 3: Nasi + Ayam Geprek Kremes + Es Jeruk\t|\t@Rp 18000\n");
    printf("\nMasukkan Menu Pilihan = "); scanf("%i", &menupilihan);
    printf("Masukkan Jumlah Porsi Order = "); scanf("%i", &porsi);

    subpahe1=porsi*10000;
    subpahe2=porsi*15000;
    subpahe3=porsi*18000;

    switch(menupilihan){
        case 1:
            printf("Anda Order PaHe 1");
            printf("Total Bayar = %i", subpahe1);
            break;
        case 2:
            printf("Anda Order PaHe 2");
            printf("Total Bayar = %i", subpahe2);
            break;
        case 3:
            printf("Anda Order PaHe 3");
            printf("Total Bayar = %i", subpahe3);
            break;
        }

    return 0;
}
