#include <stdio.h>

int main(){
    int angka1 = 5;
    int angka2;

    int angka3 = 10;
    int angka4;

    // PreIncrement
    angka2 = 2 + ++angka1;
    printf("PreIncrement\n");
    printf("angka1 = %d\n", angka1);
    printf("angka2 = %d\n", angka2);

    printf("---------------------------\n");

    // PostIncrement
    printf("PostIncrement\n");
    angka4 = 2 + angka3++;
    printf("angka1 = %d\n", angka3);
    printf("angka2 = %d\n", angka4);
}