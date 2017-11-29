#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("       PDP 5 - Mentukan MVP Pada Game Mobile Analog\n");
    puts("=========================================================");

    /* kamus */
    char namaakun[30], levelakun[25];
    int koderole, mmarc, assasins, warrior, tanker, mage, support;
    int kill, assist, death;

    /* input */
    printf("\tSelamat Datang Player PRO!\n\n");
    printf("Silakan Pilih Rolemu:\n");
    puts("|=======================|");
    puts("|No.|\tPLAY ROLES\t|");
    puts("|-----------------------|");
    puts("| 1 | MARKSMAN/ARCHER\t|");
    puts("| 2 | ASSASINS\t\t|");
    puts("| 3 | WARRIOR\t\t|");
    puts("| 4 | TANKER\t\t|");
    puts("| 5 | MAGE\t\t|");
    puts("| 6 | SUPPORT\t\t|");
    puts("|=======================|");
    printf("\nMasukkan ID Akun\t\t: "); gets(namaakun);
    printf("Masukkan Level Akun\t\t: "); gets(levelakun); fflush(stdin);
    printf("Masukkan Jumlah Kill\t\t: "); scanf("%i", &kill);
    printf("Masukkan Jumlah Assist\t\t: "); scanf("%i", &assist);
    printf("Masukkan Jumlah Death\t\t: "); scanf("%i", &death);
    printf("Masukkan Pilihan Kode Role\t: "); scanf("%i", &koderole);

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t\tPenentuan MVP\n");
    puts("=========================================================");
    switch(koderole){
        case 1:
            printf("\n\t      ROLE MARKSMAN / ARCHER\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>5 && assist>=5 && death<=1)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill<5)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<5)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>1)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        case 2:
            printf("\n\t         ROLE ASSASINS\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>8 && assist>=2 && death<=1)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill<8)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<1)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>1)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        case 3:
            printf("\n\t         ROLE WARRIOR\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>3 && assist>=7 && death<=4)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill<3)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<6)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>5)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        case 4:
            printf("\n\t          ROLE TANKER\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>1 && assist>=7 && death<=4)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill<1)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<8)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>1)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        case 5:
            printf("\n\t           ROLE MAGE\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>1 && assist>=5 && death<=3)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill>1)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<6)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>3)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        case 6:
            printf("\n\t          ROLE SUPPORT\n");
            printf("\t=================================\n");
            printf("\tID Akun\t\t\t| %s\t|\n", namaakun);
            printf("\tLevel Akun\t\t| %s\t|\n", levelakun); fflush(stdin);
            printf("\tJumlah Kill\t\t| %i\t|\n", kill);
            printf("\tJumlah Death\t\t| %i\t|\n", death);
            printf("\tJumlah Assist\t\t| %i\t|\n", assist);
            printf("\t=================================\n");
            if(kill>1 && assist>=5 && death<=3)
            {
                printf("\t|\t   Kamu MVP!            |\n");
                puts("\t=================================");
            }
            else
            {
                if(kill<1)
                {
                    printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                    puts("\t=================================");
                }
                else
                {
                    if(assist<6)
                    {
                        printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                        puts("\t=================================");
                    }
                    else
                    {
                        if(death>4)
                        {
                            printf("\t|\tMaaf Kamu Tidak MVP!    |\n");
                            puts("\t=================================");
                        }
                        else
                        {
                            printf("\t|\t   Kamu MVP!            |\n");
                            puts("\t=================================");
                        }
                    }
                }
            }
            break;
        default:
            printf("\nKesalahan Inputan, Kode Role %i Tidak Ada Dalam Daftar.\n", koderole);
            printf("Silakaan Input Kembali");
            break;
    }
    return 0;
}
