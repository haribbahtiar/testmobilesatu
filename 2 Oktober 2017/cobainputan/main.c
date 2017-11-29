#include <stdio.h>
#include <stdlib.h>

int main()
{
//    ///tipe data
//    int bil_bulat = 10; ///untuk bilangan bulat
//    float bil_pecahan = 8.899999; ///untuk bilangan pecahan
//
//    ///cara cetak inputan
//    printf("nilai : %i\n", bil_bulat);
//    printf("nilai : %.2f\n", bil_pecahan);///.2 untuk angka dibelakang koma, dan akan mengalami pembulatan
//
//    ///tipe data karakter/huruf
//    char huruf;
//    huruf = 'A';
//
//    char nama[20] = "Muchamad Harib Baht";
//
//    printf("huruf : %c\n", huruf);///cetak inputan huruf
//    printf("nama : %s\n", nama);///pakai %s karena ada jumlah karakternya

    int umur;
    printf("masukkan umur : ");
    scanf("%i", &umur);

    printf("umur anda : %i\n", umur);

    fflush(stdin);
//batas

    float angka;
    printf("masukkan angka : ");
    scanf("%f", &angka);

    printf("angka : %f\n", angka);

    fflush(stdin);
//batas

    char kata[22];
    printf("masukkan kata : ");
    //scanf("%s", &kata);///tidak bisa menampilkan spasi
    gets(kata);///bisa dengan spasi

    printf("katamu : %s\n", &kata);
    return 0;
}
