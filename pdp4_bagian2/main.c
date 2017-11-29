#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* biodata mahasiswa */
    printf("Nama : Muchamad Harib Bahtiar \n");
    printf("NIM  : A11.2017.10317 \n");
    puts("=========================================================");
    printf("\t  PDP 4 - Penghitungan Berat Badan Ideal\n");
    puts("=========================================================");

    /* kamus */
    float tinggibadan, beratbadan, bmi;

    /* input */
    printf("Masukkan Tinggi Badan(m)\t: "); scanf("%f", &tinggibadan);
    printf("Masukkan Berat Badan(kg)\t: "); scanf("%f", &beratbadan);

    /* hitung */
    bmi=beratbadan/(tinggibadan*tinggibadan);

    /* output */
    puts("\n\n=========================================================");
    printf("\t\t    Perhitungan BMI\n");
    puts("=========================================================");
    printf("Tinggi Badan Anda\t\t: %.2f m\n", tinggibadan);
    printf("Berat Badan Anda\t\t: %.1f kg\n", beratbadan);
    printf("Jadi BMI Anda\t\t\t: %.2f\n", bmi);
    printf("Keterangan:\n");
    if(bmi<18){
        printf("Under Weight/Kurus: Sebaiknya mulai menambah berat badan dan mengkonsumsi makanan berkarbohidrat di imbangi dengan olahraga.");
    }
    else if(bmi>=18 && bmi<25){
        printf("Normal Weight/Normal: Bagus, berat badan anda termasuk kategori ideal.");
    }
    else if(bmi>=25 && bmi<27){
        printf("Over Weight/Kegemukan: Anda sudah masuk kategori gemuk. sebaiknya hindari makanan berlemak dan mulailah meningkatkan olahraga seminggu minimal 2 kali.");
    }
    else{
        printf("Obesitas: Sebaiknya segera membuat program menurunkan berat badan karena anda termasuk kategori obesitas/ terlalu gemuk dan tidak baik bagi kesehatan.");
    }
    return 0;
}
