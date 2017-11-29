#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ongko1;
    int ongko2;
    int jawabane;
    char huruf;
    char jeneng[46];

    printf("Leboke ongko1 = ");
    scanf("%i",&ongko1);
    printf("Leboke ongko2 = ");
    scanf("%i",&ongko2);
    jawabane = ongko1+ongko2;
    printf("Jumlahe = %i",jawabane);

    fflush(stdin);

    printf("Leboke huruf = ");
    scanf("%c",&huruf);
    printf("Hurupe = %c",huruf);

    fflush(stdin);

    printf("Leboke jenengmu = ");
    scanf("%s",&jeneng);
    printf("Jenengmu = %s",jeneng);

    return 0;
}
