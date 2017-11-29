#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n\n");
    puts("==========================================================");
    printf("\t\t\tPDP 1 Bagian 1\n");
    puts("==========================================================");

    /* kamus */
    int a;
    float b;
    char c;
    char d[30];

    /* input */
    printf("Membaca dan menulis, ketik nilai integer: "); scanf("%i", &a);
    printf("Membaca dan menulis, ketik nilai float: "); scanf("%f", &b);
    fflush(stdin);
    printf("Membaca dan menulis, ketik karakter: "); scanf("%c", &c);
    fflush(stdin);
    printf("Membaca dan menulis, ketik kata: "); scanf("%s", &d);

    /* output */
    puts("\n==========================================================");
    printf("\t\t\tData Yang Didapat\n");
    puts("==========================================================");
    printf("Nilai integer yang dibaca: %i \n", a);
    printf("Nilai float yang dibaca: %f \n", b);
    fflush(stdin);
    printf("Karakter yang terbaca: %c \n", c);
    fflush(stdin);
    printf("Kata yang terbaca: %s \n", d);
    return 0;
}
