#include <stdio.h>

int main(){
    int angka1 = 5;
    int angka2;

    int angka3 = 10;
    int angka4;

    // PreDecrement
    angka2 = 2 + ++angka1;
    printf("PreDecrement\n");
    printf("angka1 = %d\n", angka1);
    printf("angka2 = %d\n", angka2);

    printf("---------------------------\n");

    // PostDecrement
    printf("PostDecrement\n");
    angka4 = 2 + angka3++;
    printf("angka1 = %d\n", angka3);
    printf("angka2 = %d\n", angka4);
}