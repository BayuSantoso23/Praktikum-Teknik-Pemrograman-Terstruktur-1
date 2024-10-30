#include <stdio.h>

int alpha();

int main(){
    int x = 20;

    printf("Di main(): x = %d\n", x);
    alpha();

    return 0;
}

int alpha(){
    int x = 10;

    printf("Di alpha(): x = %d\n", x);

    return x;
}