#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///integer
    printf("Integer\n");
    int angka1;
    int angka2;

    angka1 = 46;
    angka2 = 48;

    printf("nilai angka 1 = %i\n",angka1);
    printf("nilai angka 2 = %i\n",angka2);
    printf("\n");
    ///float
    printf("Float\n");

    float angka3;
    float angka4;

    angka3 = 69.1;
    angka4 = 96.1;

    printf("nilai angka 3 = %.3f\n",angka3);
    printf("nilai angka 4 = %.3f\n",angka4);

    printf("\n");
    ///char
    printf("Char\n");

    char wow;
    wow = 'C';

    char nama[50];
    strcpy (nama,"Alvin Bagoes Rivaldi");

    printf("Chare = %c\n",wow);
    printf("Jenengku = %s\n",nama);

    return 0;
}
