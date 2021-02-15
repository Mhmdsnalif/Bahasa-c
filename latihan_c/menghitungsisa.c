#include <stdio.h>

int main(){


    int sisa,total; //deklarasi type data

    printf("==========================\n");
    printf("*** Perusahaan Minuman ***\n");
    printf("==========================\n\n");

    printf("Produk harian : 1300\n");
    printf("Jumlah minuman dalam 1 dus : 30\n");
    printf("===================================\n");

    //perhitungan
    total = 1300 / 30;
    sisa = 1300 % 30;

    printf("Banyak dus :%d\n",total);
    printf("Sisa minuman :%d\n\n",sisa);
return 0;

}
