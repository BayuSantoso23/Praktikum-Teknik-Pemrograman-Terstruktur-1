// Union share the same address memory for variables
#include <stdio.h>

int main(){

    union bilBulat{
        unsigned int bilG;
        unsigned char bilC[2];
    };

    union bilBulat bilX;
    bilX.bilG = 0x1234;

    printf("bilG : %x\n", bilX.bilG);
    printf("bilC[0] : %x\n", bilX.bilC[0]);
    printf("bilC[1] : %x\n", bilX.bilC[1]);
    return 0;
}