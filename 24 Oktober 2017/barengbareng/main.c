#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///kamus
    int absen, nilai;
    char grade;

    ///program
    printf("=====INPUT NILAI=====\n");
    printf("Masukkan Persentase Absenmu =  "); scanf("%i", &absen);
    if(absen<75)
    {
        printf("Absensi Kurang");
    }
    else
    {
        printf("\nSilakan Masukkan Nilai = "); scanf("%i", &nilai);
        if(nilai>=85 && nilai<=100) ///85<=nilai<=100
        {
            grade='A';
        }
        else if(nilai>=70 && nilai<=84) ///70<=nilai<=84
        {
            grade='B';
        }
        else if(nilai>=60 && nilai<=69) ///60<=nilai<=69
        {
            grade='C';
        }
        else if(nilai>=50 && nilai<=59) ///50<=nilai<=59
        {
            grade='D';
        }
        else
        {
            grade='E';
        }
        printf("\nGrade Nilaumu = %c", grade);
    }
    return 0;
}
