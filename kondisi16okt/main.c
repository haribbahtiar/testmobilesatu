#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    int angka;

    ///input
    printf("NILAI MUTLAK\n");
    printf("Masukkan Nilai = "); scanf("%i", &angka);
    if(angka>0 && angka<10){
        printf("Mlebu");
    }
    else{
        printf("Whaha");
    }

    return 0;
}
