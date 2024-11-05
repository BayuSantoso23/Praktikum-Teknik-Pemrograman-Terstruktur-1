#include <stdio.h>
#include <math.h>

int main(){

    double angka, akar;

    printf("Masukkan angka : ");
    scanf("%lf", &angka);

    akar = sqrt(angka);

    printf("Angka setelah dikuadratkan dari %.2f adalah : %.2f", angka, akar);
}