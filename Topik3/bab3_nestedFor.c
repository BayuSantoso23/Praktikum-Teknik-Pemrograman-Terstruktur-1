#include <stdio.h>

int main(){
    int tinggi, pencacahBaris, pencacahBintang;

    printf("Tinggi segitiga : ");
    scanf("%d\n", &tinggi);

    for(pencacahBaris = 1; pencacahBaris <= tinggi; pencacahBaris++){
        for(pencacahBintang = 1; pencacahBintang <= pencacahBaris; pencacahBintang++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}