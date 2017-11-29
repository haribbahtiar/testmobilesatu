#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///kamus
    char nama[30], username[30], password[20];
    char temp_username[30], temp_password[20];
    float angka1, angka2, tambah, kali;
    int permainan;

    ///program
    printf("====Form Registrasi Permainan====\n");
    printf("Masukkan Username: "); gets(username);
    printf("Masukkan Password: "); gets(password);
    system("cls");

    printf("====LOGIN====\n");
    printf("Masukkan Username: "); gets(temp_username);
    printf("Masukkan Password: "); gets(temp_password);

    if(strcmp(username, temp_username)==0 && strcmp(password, temp_password)==0)
    {
        printf("Akses Diterima. Selamat Datang!\n");
        system("pause");
        printf("\n\n\tSilakan Pilih Permainan:\n\n");
        puts("1. PERTAMBAHAN\t|");
        puts("2. PERKALIAN\t|");
        printf("\nPilih Jenis Permainan\t: "); scanf("%i", &permainan); fflush(stdin);
        printf("Masukkan Nama Anda\t: "); gets(nama); fflush(stdin);
        printf("Masukkan Angka 1\t: "); scanf("%f", &angka1);
        printf("Masukkan Angka 2\t: "); scanf("%f", &angka2);

        puts("\n\n=========================================================");
        printf("\t\t\t    Permainan\n");
        puts("=========================================================");
        switch(permainan){
            case 1:
                printf("Hai %s kamu memilih permainan 1\n", nama);
                tambah=angka1+angka2;
                printf("Hasil %.2f + %.2f = %.2f", angka1, angka2, tambah);
                break;
            case 2:
                printf("Hai %s kamu memilih permainan 2\n", nama);
                kali=angka1*angka2;
                printf("Hasil %.2f * %.2f = %.2f", angka1, angka2, kali);
                break;
            default:
                printf("Kesalahan Inputan, Menu Nomer %i Tidak Ada Dalam Daftar.\n", permainan);
                printf("Silakaan Input Kembali");
                break;
        }
    }
    else
    {
        printf("Username atau Password Salah!");
    }

    return 0;
}
