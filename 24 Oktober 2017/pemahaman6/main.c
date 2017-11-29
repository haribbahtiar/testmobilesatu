#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///kamus
    char nama[30], username[30], password[20];
    char temp_username[30], temp_password[20];
    int kodemakanan, ayam=13000, rames=8000, rawon=15000, goreng=12000, porsi;
    int submakan1, submakan2, submakan3, submakan4;

    ///program
    printf("====Form Registrasi Go-Nasi====\n");
    printf("Masukkan Nama Lengkap: "); gets(nama);
    printf("Masukkan Username: "); gets(username);
    printf("Masukkan Password: "); gets(password);
    system("cls");

    printf("====LOGIN====\n");
    printf("Masukkan Username: "); gets(temp_username);
    printf("Masukkan Password: "); gets(temp_password);

    if(strcmp(username, temp_username)==0 && strcmp(password, temp_password)==0)
    {
        printf("Selamat Datang %s", nama);
        printf("\n\n\tSilakan Pilih Menu:\n\n");
        puts("1. Nasi Ayam\t\t| Rp 13000 |");
        puts("2. Nasi Rames\t\t| Rp 8000  |");
        puts("3. Nasi Rawon\t\t| Rp 15000 |");
        puts("4. Nasi Goreng\t\t| Rp 12000 |");
        printf("\nMasukkan Menu Order\t\t: "); scanf("%i", &kodemakanan);
        printf("Masukkan Jumlah Porsi Order\t: "); scanf("%i", &porsi);

        submakan1=porsi*ayam+5000;
        submakan2=porsi*rames+5000;
        submakan3=porsi*rawon+5000;
        submakan4=porsi*goreng+5000;

        puts("\n\n=========================================================");
        printf("\t\t\tNota Pembelian\n");
        puts("=========================================================");
        switch(kodemakanan){
            case 1:
                printf("\nNama Konsumen\t: %s\n", nama); fflush(stdin);
                printf("Pesanan Makanan\n");
                printf("%i Porsi Nasi Ayam----Total Rp. %i\n(termasuk biaya kirim Rp. 5000)\n", porsi, submakan1);
                break;
            case 2:
                printf("\nNama Konsumen\t: %s\n", nama); fflush(stdin);
                printf("Pesanan Makanan\n");
                printf("%i Porsi Nasi Rames----Total Rp. %i\n(termasuk biaya kirim Rp. 5000)\n", porsi, submakan2);
                break;
            case 3:
                printf("\nNama Konsumen\t: %s\n", nama); fflush(stdin);
                printf("Pesanan Makanan \n");
                printf("%i Porsi Nasi Rawon----Total Rp. %i\n(termasuk biaya kirim Rp. 5000)\n", porsi, submakan3);
                break;
            case 4:
                printf("\nNama Konsumen\t: %s\n", nama); fflush(stdin);
                printf("Pesanan Makanan \n");
                printf("%i Porsi Nasi Goreng----Total Rp. %i\n(termasuk biaya kirim Rp. 5000)\n", porsi, submakan4);
                break;
            default:
                printf("Kesalahan Inputan, Menu Nomer %i Tidak Ada Dalam Daftar.\n", kodemakanan);
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
