#include <stdio.h>
#include <string.h>

int main(){

    float total,rata;

    printf("Nama Kegiatan       : Lari Pagi\n");
    printf("Jarak yang ditempuh : 12.1\n");

    printf("Nama Kegiatan       : Berenang\n");
    printf("Jarak yang ditempuh : 1\n");

    printf("Nama Kegiatan       : Bersepeda memutari rumah\n");
    printf("Jarak yang ditempuh : 9\n");

    printf("Nama Kegiatan       : Sprint bersama teman\n");
    printf("Jarak yang ditempuh : 3.5\n");
    printf("---------------------------------------------------\n");

    total = 12.1 + 1 +9 +3.5;
    rata = total / 4;

    printf("Total jarak yang di tempuh adalah %.1f\n",total);
    printf("Rata - rata jarak yang di tempuh adalah %.1f\n\n",rata);
return 0;


}
