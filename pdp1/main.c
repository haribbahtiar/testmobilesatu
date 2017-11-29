#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");

    /* kamus */
    int a;
    float b;
    char c;

    /* program */
    printf("Membaca dan menulis, ketik nilai integer: ");
    scanf("%i", &a);
    printf("Nilai yang dibaca: %i \n", a);

    printf("Membaca dan menulis, ketik nilai float: ");
    scanf("%f", &b);
    printf("Nilai yang dibaca: %f \n", b);

    fflush(stdin);

    printf("Membaca dan menulis, ketik nilai char: ");
    scanf("%c", &c);
    printf("Nilai yang dibaca: %c \n", c);
    return 0;
}
