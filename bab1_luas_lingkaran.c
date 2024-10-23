#include <stdio.h>

int main(void){
    const float pi = 3.14;
    int jari2 = 5;
    float luas_lingkaran;

    printf("Menghitung luas lingkaran");
    printf("\nPanjang jari-jari lingkaran = %d cm", jari2);

    luas_lingkaran = pi * jari2 * jari2;

    printf("\nLuas lingkaran dengan jari-jari %d cm adalah %.2f", jari2, luas_lingkaran);

    return 0;
}