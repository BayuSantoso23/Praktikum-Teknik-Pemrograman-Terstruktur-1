#include <stdio.h>

void angka1();

int main(){

    int angka = 55;
    angka1();
    angka1();
    printf("Variabel angka pada main = %d\n", angka);
    angka1();

    return 0;
}

void angka1(){
    static int angka = 0;

    angka++;
    printf("Variabel angka pada angka1 = %d\n", angka);
}