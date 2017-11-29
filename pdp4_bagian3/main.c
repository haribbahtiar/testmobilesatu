#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t\tPDP 4 - Kasir Cafe Samudra\n");
    puts("=========================================================\n");

    /* kamus */
    char namakonsumen[30], tanggalbeli[25];
    int kodeminuman, icetea=6000, caramel=30000, green=25000, milk=15000, choco=25000, porsi;
    int subminum1, subminum2, subminum3, subminum4, subminum5;

    /* input */
    printf("\t\t  Selamat Datang di Samudra Cafe\n");
    printf("\t\tSilakan Pilih Menu Yang Anda Sukai:\n\n");
    puts("|==========================================|");
    puts("|No.|\t\tMinuman\t\t|  Harga   |");
    puts("|------------------------------------------|");
    puts("| 1 | Ice Tea\t\t\t| Rp 6000  |");
    puts("| 2 | Caramel Machiato\t\t| Rp 30000 |");
    puts("| 3 | Green Tea Latte\t\t| Rp 25000 |");
    puts("| 4 | Milkshake\t\t\t| Rp 15000 |");
    puts("| 5 | Chocolate Hazelnut\t| Rp 25000 |");
    puts("|==========================================|");
    printf("\nMasukkan Nama Konsumen\t\t: "); gets(namakonsumen);
    printf("Masukkan Tanggal Pembelian\t: "); gets(tanggalbeli); fflush(stdin);
    printf("Masukkan Menu Order\t\t: "); scanf("%i", &kodeminuman);
    printf("Masukkan Jumlah Porsi Order\t: "); scanf("%i", &porsi);

    /* hitung */
    subminum1=porsi*icetea;
    subminum2=porsi*caramel;
    subminum3=porsi*green;
    subminum4=porsi*milk;
    subminum5=porsi*choco;

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tNota Pembelian\n");
    printf("\t\t\t Samudra Cafe\n");
    puts("=========================================================");
    switch(kodeminuman){
        case 1:
            printf("\nNama Konsumen\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Pesanan Minuman \n");
            printf("\tJumlah |    Nama Minuman     | Total Harga\n\t==========================================\n");
            printf("\t   %i   : Ice Tea             : Rp. %i \n", porsi, subminum1);
            printf("\t   0   : Caramel Machiato    : Rp. 0 \n");
            printf("\t   0   : Green Tea Latte     : Rp. 0 \n");
            printf("\t   0   : Milkshake           : Rp. 0 \n");
            printf("\t   0   : Chocolate Hazelnut  : Rp. 0 \n");
            break;
        case 2:
            printf("\nNama Konsumen\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Pesanan Minuman \n");
            printf("\tJumlah |    Nama Minuman     | Total Harga\n\t==========================================\n");
            printf("\t   0   : Ice Tea             : Rp. 0 \n");
            printf("\t   %i   : Caramel Machiato    : Rp. %i \n", porsi, subminum2);
            printf("\t   0   : Green Tea Latte     : Rp. 0 \n");
            printf("\t   0   : Milkshake           : Rp. 0 \n");
            printf("\t   0   : Chocolate Hazelnut  : Rp. 0 \n");
            break;
        case 3:
            printf("\nNama Konsumen\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Pesanan Minuman \n");
            printf("\tJumlah |    Nama Minuman     | Total Harga\n\t==========================================\n");
            printf("\t   0   : Ice Tea             : Rp. 0 \n");
            printf("\t   0   : Caramel Machiato    : Rp. 0 \n");
            printf("\t   %i   : Green Tea Latte     : Rp. %i \n", porsi, subminum3);
            printf("\t   0   : Milkshake           : Rp. 0 \n");
            printf("\t   0   : Chocolate Hazelnut  : Rp. 0 \n");
            break;
        case 4:
            printf("\nNama Konsumen\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Pesanan Minuman \n");
            printf("\tJumlah |    Nama Minuman     | Total Harga\n\t==========================================\n");
            printf("\t   0   : Ice Tea             : Rp. 0 \n");
            printf("\t   0   : Caramel Machiato    : Rp. 0 \n");
            printf("\t   0   : Green Tea Latte     : Rp. 0 \n");
            printf("\t   %i   : Milkshake           : Rp. %i \n", porsi, subminum4);
            printf("\t   0   : Chocolate Hazelnut  : Rp. 0 \n");
            break;
        case 5:
            printf("\nNama Konsumen\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Pesanan Minuman \n");
            printf("\tJumlah |    Nama Minuman     | Total Harga\n\t==========================================\n");
            printf("\t   0   : Ice Tea             : Rp. 0 \n");
            printf("\t   0   : Caramel Machiato    : Rp. 0 \n");
            printf("\t   0   : Green Tea Latte     : Rp. 0 \n");
            printf("\t   0   : Milkshake           : Rp. 0 \n");
            printf("\t   %i   : Chocolate Hazelnut  : Rp. %i \n", porsi, subminum5);
            break;
        default:
            printf("Kesalahan Inputan, Menu Nomer %i Tidak Ada Dalam Daftar.\n", kodeminuman);
            printf("Silakaan Input Kembali");
            break;
        }
    return 0;
}
