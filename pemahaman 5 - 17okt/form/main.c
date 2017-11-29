#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///kamus
    char nama[30], username[30], password[20];
    char temp_username[30], temp_password[20];

    ///program
    printf("====Silakan Isi Form Registrasi====\n");
    printf("Masukkan Nama: "); gets(nama);
    printf("Masukkan Username: "); gets(username);
    printf("Masukkan Password: "); gets(password);
    system("cls");

    printf("====LOGIN====\n");
    printf("Masukkan Nama: "); gets(temp_username);
    printf("Masukkan Password: "); gets(temp_password);

    if(strcmp(username, temp_username)==0 && strcmp(password, temp_password)==0)
    {
        printf("Selamat Datang %s", nama);
    }
    else
    {
        printf("Username atau Password Salah!");
    }
    return 0;
}
