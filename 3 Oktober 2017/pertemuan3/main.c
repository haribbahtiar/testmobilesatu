#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
//    bool hasil;
//
//    hasil = (30%2)==1;
//
//    printf("%d", hasil); ///hasilnya 1=benar 0=salah

    float phi = 3.14;
    float r;
    float luas;

    printf("Masukkan Jari-Jari: ");
    scanf("%f", &r);

    ///r = 7;
    luas = phi * r * r;
    printf("Luas lingkaran = %f", luas);

    return 0;
}
