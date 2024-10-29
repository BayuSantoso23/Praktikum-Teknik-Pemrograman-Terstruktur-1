#include <stdio.h>

int main(){

    int nilaix, nilaiy;
    printf("f(x) = (x + 3) * 2\n");

    garis();

    nilaix = 2;

    nilaiy = fungsiLinear(nilaix);

    printf("f(2) = %d\n", nilaiy);

    return 0;
}

int fungsiLinear(int x){
    
    int y;
    y = (x + 3) * 2;

    return y;
}

void garis(){
    printf("--------------\n");
}