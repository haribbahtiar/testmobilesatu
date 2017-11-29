#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t       PDP 5 - Diskon Pembelian Cat\n");
    puts("=========================================================");

    /* kamus */
    char namakonsumen[30], tanggalbeli[25];
    int kodecat, hargadulux=24500, hargacatylac=23500, harganippon=23500, hargaavitex=20000, hargamowilex=18500;
    int perkaleng=10, jumlahkaleng, totalharga;
    int hargaddulux, hargadcatylac, hargadnippon, hargadavitex, hargadmowilex;
    int subtotdulux, subtotcatylac, subtotnippon, subtotavitex, subtotmowilex;
    float luasdinding, jaslikaleng;

    /* input */
    printf("\tSelamat Datang di Toko Cat Semarang Berkilau\n");
    printf("\t\tSilakan Pilih Cat:\n\n");
    puts("|==================================|");
    puts("|No.|\t   Merk Cat\t|   Harga  |");
    puts("|----------------------------------|");
    puts("| 1 | DULUX\t\t| Rp 24500 |");
    puts("| 2 | CATYLAC\t\t| Rp 23500 |");
    puts("| 3 | NIPPON PAINT\t| Rp 23500 |");
    puts("| 4 | AVITEX\t\t| Rp 20000 |");
    puts("| 5 | MOWILEX\t\t| Rp 18500 |");
    puts("|==================================|");
    printf("\nDiketahui Per Kaleng Bisa Digunakan Seluas\t: %i m2\n", perkaleng);
    printf("Masukkan Nama Konsumen\t\t\t\t: "); gets(namakonsumen);
    printf("Masukkan Tanggal Pembelian\t\t\t: "); gets(tanggalbeli); fflush(stdin);
    printf("Masukkan Luas Dinding(m2)\t\t\t: "); scanf("%f", &luasdinding);
    printf("Masukkan Pilihan Kode Merk Cat\t\t\t: "); scanf("%i", &kodecat);

    /* hitung */
    jaslikaleng=luasdinding/perkaleng;
    jumlahkaleng=ceil(jaslikaleng);

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tNota Pembelian\n");
    printf("\t\tToko Cat Semarang Berkilau\n");
    puts("=========================================================");
    switch(kodecat){
        case 1:
            if(jumlahkaleng>=1 && jumlahkaleng<=25)
            {
                hargaddulux=24500;
            }
            else if(jumlahkaleng>=26 && jumlahkaleng<=50)
            {
                hargaddulux=23000;
            }
            else
            {
                hargaddulux=22000;
            }
            printf("Nama Konsumen\t\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Harga Normal Cat Dulux Per Kaleng\t: Rp %i\n", hargadulux);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi\t: Rp %i\n", hargaddulux);
            printf("Luas Dinding Yang Di Cat\t\t: %.1f m2\n", luasdinding);

            totalharga=jumlahkaleng*hargaddulux;

            printf("\nCAT DULUX\n");
            printf("\tJumlah Kaleng |   Merk Cat   | Total Harga\n\t==========================================\n");
            printf("\t      %i      : Dulux        : Rp. %i \n", jumlahkaleng, totalharga);
            printf("\t      0       : Catylac      : Rp. 0 \n");
            printf("\t      0       : Nippon Paint : Rp. 0 \n");
            printf("\t      0       : Avitex       : Rp. 0 \n");
            printf("\t      0       : Mowilex      : Rp. 0 \n");
            break;
        case 2:
            if(jumlahkaleng>=1 && jumlahkaleng<=25)
            {
                hargadcatylac=23500;
            }
            else if(jumlahkaleng>=26 && jumlahkaleng<=50)
            {
                hargadcatylac=22500;
            }
            else
            {
                hargadcatylac=21000;
            }
            printf("Nama Konsumen\t\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Harga Normal Cat Catylac Per Kaleng\t: Rp %i\n", hargacatylac);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi\t: Rp %i\n", hargadcatylac);
            printf("Luas Dinding Yang Di Cat\t\t: %.1f m2\n", luasdinding);

            totalharga=jumlahkaleng*hargadcatylac;

            printf("\nCAT CATYLAC\n");
            printf("\tJumlah Kaleng |   Merk Cat   | Total Harga\n\t==========================================\n");
            printf("\t      0       : Dulux        : Rp. 0 \n");
            printf("\t      %i      : Catylac      : Rp. %i \n", jumlahkaleng, totalharga);
            printf("\t      0       : Nippon Paint : Rp. 0 \n");
            printf("\t      0       : Avitex       : Rp. 0 \n");
            printf("\t      0       : Mowilex      : Rp. 0 \n");
            break;
        case 3:
            if(jumlahkaleng>=1 && jumlahkaleng<=25)
            {
                hargadnippon=23500;
            }
            else if(jumlahkaleng>=26 && jumlahkaleng<=50)
            {
                hargadnippon=22000;
            }
            else
            {
                hargadnippon=20500;
            }
            printf("Nama Konsumen\t\t\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Harga Normal Cat Nippon Paint Per Kaleng\t: Rp %i\n", harganippon);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi\t\t: Rp %i\n", hargadnippon);
            printf("Luas Dinding Yang Di Cat\t\t\t: %.1f m2\n", luasdinding);

            totalharga=jumlahkaleng*hargadnippon;

            printf("\nCAT NIPPON PAINT\n");
            printf("\tJumlah Kaleng |   Merk Cat   | Total Harga\n\t==========================================\n");
            printf("\t      0       : Dulux        : Rp. 0 \n");
            printf("\t      0       : Catylac      : Rp. 0 \n");
            printf("\t      %i      : Nippon Paint : Rp. %i \n", jumlahkaleng, totalharga);
            printf("\t      0       : Avitex       : Rp. 0 \n");
            printf("\t      0       : Mowilex      : Rp. 0 \n");
            break;
        case 4:
            if(jumlahkaleng>=1 && jumlahkaleng<=25)
            {
                hargadavitex=20000;
            }
            else if(jumlahkaleng>=26 && jumlahkaleng<=50)
            {
                hargadavitex=19000;
            }
            else
            {
                hargadavitex=17500;
            }
            printf("Nama Konsumen\t\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Harga Normal Cat Avitex Per Kaleng\t: Rp %i\n", hargaavitex);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi\t: Rp %i\n", hargadavitex);
            printf("Luas Dinding Yang Di Cat\t\t: %.1f m2\n", luasdinding);

            totalharga=jumlahkaleng*hargadavitex;

            printf("\nCAT AVITEX\n");
            printf("\tJumlah Kaleng |   Merk Cat   | Total Harga\n\t==========================================\n");
            printf("\t      0       : Dulux        : Rp. 0 \n");
            printf("\t      0       : Catylac      : Rp. 0 \n");
            printf("\t      0       : Nippon Paint : Rp. 0 \n");
            printf("\t      %i      : Avitex       : Rp. %i \n", jumlahkaleng, totalharga);
            printf("\t      0       : Mowilex      : Rp. 0 \n");
            break;
        case 5:
            if(jumlahkaleng>=1 && jumlahkaleng<=25)
            {
                hargadmowilex=18500;
            }
            else if(jumlahkaleng>=26 && jumlahkaleng<=50)
            {
                hargadmowilex=17000;
            }
            else
            {
                hargadmowilex=16000;
            }
            printf("Nama Konsumen\t\t\t\t: %s\n", namakonsumen);
            printf("Tanggal Pembelian\t\t\t: %s\n", tanggalbeli); fflush(stdin);
            printf("Harga Normal Cat Mowilex Per Kaleng\t: Rp %i\n", hargamowilex);
            printf("Harga Diskon Per Kaleng Sesuai Kondisi\t: Rp %i\n", hargadmowilex);
            printf("Luas Dinding Yang Di Cat\t\t: %.1f m2\n", luasdinding);

            totalharga=jumlahkaleng*hargadmowilex;

            printf("\nCAT MOWILEX\n");
            printf("\tJumlah Kaleng |   Merk Cat   | Total Harga\n\t==========================================\n");
            printf("\t      0       : Dulux        : Rp. 0 \n");
            printf("\t      0       : Catylac      : Rp. 0 \n");
            printf("\t      0       : Nippon Paint : Rp. 0 \n");
            printf("\t      0       : Avitex       : Rp. 0 \n");
            printf("\t      %i      : Mowilex      : Rp. %i \n", jumlahkaleng, totalharga);
            break;
        default:
            printf("\nKesalahan Inputan, Kode Cat %i Tidak Ada Dalam Daftar.\n", kodecat);
            printf("Silakaan Input Kembali");
            break;
            }
    return 0;
}
