#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///nested if adalah if di dalam if, if bercabang atau seleksi di dalam seleksi
    char nama[50], jeniskelamin;
    int umur;

    ///meminta inputan nama
    do
    {
        printf("Masukkan nama anda [3..50] : "); scanf("%[^\n]",&nama); fflush(stdin);
    }
    while(strlen(nama)<3 || strlen(nama)>50); ///akan terus meminta inputan ketika panjang nama dibawah 3 karakter atau lebih dari 50 karakter

    ///meminta inputan jenis kelamin
    do
    {
        printf("Masukkan jenis kelamin anda (KAPITAL) [L/P] : "); scanf("%c",&jeniskelamin); fflush(stdin); //L untuk laki laki dan P untuk perempuan
    }
    while(jeniskelamin!="L" || jeniskelamin!="P"); ///akan terus meminta inputan jenis kelamin jika yang diinput bukan L dan P

    ///meminta inputan umur
    do
    {
        printf("Masukkan umur anda [1..60] : "); scanf("%d",&umur); fflush(stdin);
    }
    while(umur<1 || umur>60); ///akan terus meminta inputan umur jika umur yang diinput dibawah 1 tahun atau lebih dari 60 tahun

    ///jika jenis kelaminnya laki laki maka :

    return 0;
}
