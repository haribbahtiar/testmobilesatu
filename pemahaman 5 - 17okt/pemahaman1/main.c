#include <stdio.h>
#include <stdlib.h>
/*
    NAMA = MUCHAMAD HARIB BAHTIAR
    NIM  = A11.2017.10317
*/
int main()
{
    /// DEKLARASI
    float nilai;
    char grade;
    /// Program
    printf("====INPUT NILAI====\n");
    printf("Masukkan nilai: "); scanf("%f", &nilai);
    if(nilai>=85 && nilai<=100)
    {
        grade = 'A';
        printf("\nGrade Nilai kamu = %c\n", grade);
    }
    else if(nilai>=70 && nilai<=84)
    {
        grade = 'B';
        printf("\nGrade Nilai kamu = %c\n", grade);
    }
    else if(nilai>=60 && nilai<=69)
    {
        grade = 'C';
        printf("\nGrade Nilai kamu = %c\n", grade);
    }
    else
    {
        printf("\nREMIDI\n");
    }

    return 0;
}
