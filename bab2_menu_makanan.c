#include <stdio.h>

int main(){
    int angka;

    printf("Input angka untuk menu(1-3) = ");
    scanf("%d", &angka);

    switch (angka)
    {
    case 1:
        printf("Menu 1: Es teh + nasi + ayam + tempe\n");
        break;
    case 2:
        printf("Menu 2: Es teh + nasi + ayam\n");
        break;
    case 3:
        printf("Menu 1: Es teh + nasi\n");
        break; 
    default:
        printf("Maaf, format nomor tidak sesuai\n");
        break;
    }
}