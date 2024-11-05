#include <stdio.h>

int main(){
    int tgl_lahir[] = {01, 10, 2007};
    int *ptgl;

    ptgl = tgl_lahir;

    int i;
    for ( i = 0; i < sizeof(tgl_lahir)/sizeof(int); i++){
        printf("ptgl = %x\n", ptgl);
        printf("ptgl = %d\n", *ptgl);
        ptgl++;
    }
    return 0;
}