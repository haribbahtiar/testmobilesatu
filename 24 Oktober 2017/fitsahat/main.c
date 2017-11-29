#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    ///kamus
    char ukuran;
    int harga;
    bool opsi;

    ///program
    printf("===Order Fitsa Hat===\n");
    printf("S. Small = Rp. 56000\n");
    printf("M. Medium = Rp. 78000\n");
    printf("L. Large = Rp. 102000\n");
    printf("X. Xtra Large = Rp. 146000\n");
    printf("Tambah Toping = + Rp. 10000\n");
    printf("\nMasukkan Ukuran = "); scanf("%c", &ukuran);

    switch(ukuran){
        case 'S':
            printf("Tambah Toping [1/0]?"); scanf("%d", &opsi);
            if(opsi==1)
            {
                harga=56000+10000;
            }
            else
            {
                harga=56000;
            }
            printf("Total Pembayaran = %d", harga);
            break;
        case 'M':
            printf("Tambah Toping [1/0]?"); scanf("%d", &opsi);
            if(opsi==1)
            {
                harga=78000+10000;
            }
            else
            {
                harga=78000;
            }
            printf("Total Pembayaran = %d", harga);
            break;
        case 'L':
            printf("Tambah Toping [1/0]?"); scanf("%d", &opsi);
            if(opsi==1)
            {
                harga=102000+10000;
            }
            else
            {
                harga=102000;
            }
            printf("Total Pembayaran = %d", harga);
            break;
        case 'X':
            printf("Tambah Toping [1/0]?"); scanf("%d", &opsi);
            if(opsi==1)
            {
                harga=146000+10000;
            }
            else
            {
                harga=146000;
            }
            printf("Total Pembayaran = %d", harga);
            break;
        default:
            printf("Kode Salah!");
            break;
        }

    return 0;
}
