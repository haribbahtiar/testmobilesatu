#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Nama\t\t: Muchamad Harib Bahtiar\n");
    printf("NIM\t\t: A11.2017.10317\n");
    printf("Kelompok\t: 4108\n\n");

    ///judul
    printf("=======================================================\n");
    printf("\t    Looping - loop6.c\n");
    printf("=======================================================\n");
    printf("Mencetak Perulangan Kode ASCII Menggunakan WHILE, FOR, DO-WHILE\n\n");

    ///kamus
    int kodeperlulangan, iwhile=1, ifor, idowhile=0;

    ///program
    printf("\tSelamat Datang Mahasiswa Udinus\n");
    printf("\tSilakan Pilih Tipe Perulangan:\n\n");
    puts("\t|====================|");
    puts("\t|No.|   Perulangan   |");
    puts("\t|--------------------|");
    puts("\t| 1 |   WHILE        |");
    puts("\t| 2 |   FOR          |");
    puts("\t| 3 |   DO-WHILE     |");
    puts("\t|====================|");
    printf("\n\tMasukkan Pilihan Tipe Perulangan\t: "); scanf("%d", &kodeperlulangan);
    switch(kodeperlulangan){
        case 1:
            printf("\nMenggunakan Perulangan WHILE:\n\n");
            while(iwhile<=127)
                {
                    printf("Kode ASCII %d = %c\n", iwhile, iwhile);
                    iwhile++;
                }
            break;
        case 2:
            printf("\nMenggunakan Perulangan FOR:\n\n");
            for(ifor=0; ifor<=127; ifor++)
                {
                    printf("Kode ASCII %d = %c\n", ifor, ifor);
                }
            break;
        case 3:
            printf("\nMenggunakan Perulangan DO-WHILE:\n\n");
            do
                {
                    printf("Kode ASCII %d = %c\n", idowhile, idowhile);
                    idowhile++;
                }
            while(idowhile<=127);
            break;
        default:
            printf("\nKesalahan Inputan, Kode Perulangan %i Tidak Ada Dalam Daftar.\n", kodeperlulangan);
            printf("Silakaan Input Kembali");
            break;
    }
}
