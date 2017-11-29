#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    char huruf;

    ///input
    printf("HURUF\n");
    printf("Masukkan Huruf = "); scanf("%c", &huruf);
    if((huruf>='a' && huruf<='z') || (huruf>='A' && huruf<='Z')){
        printf("Mlebu, kui huruf");
    }
    else{
        printf("Whaha, kui ongko");
    }

    return 0;
}
