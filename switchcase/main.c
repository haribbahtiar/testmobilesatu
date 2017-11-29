#include <stdio.h>
#include <stdlib.h>

int main()
{

    int kode_makanan; ///kamus

    //printf("Kode 1. Nasi Goreng\n");
    //printf("Kode 2. Nasi Rebus\n");
    //printf("Kode 3. Nasi Setengah Mateng\n");
    //printf("Kode 4. Nasi Mentah\n");

    printf("Input Kode Makanan = "); scanf("&d", &kode_makanan);

    switch (kode_makanan){
    case 1 :
        printf("Nasi Goreng\n"); break;
    case 2 :
        printf("Nasi Rebus\n"); break;
    case 3 :
        printf("Nasi Setengah Mateng\n"); break;
    case 4 :
        printf("Nasi Mentah\n"); break;
    default :
        printf("Ora Ngeleh Po?\n"); break;
        }
    return 0;
}
