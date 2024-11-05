#include <stdio.h>

int main(){

    // While Loop
    // int bil = 2

    // while (bil <= 16){
    //     printf("%d\n", bil);

    //     bil = bil + 2;
    // }

    // Do While
    // int bil = 750;

    // do{
    //     printf("%d\n", bil);

    //     bil = bil + 2;
    // }while (bil <= 0);


    // For Loop
    int bil;

    for(bil = 2; bil <= 16;bil++){
        if (bil%2==0){
            printf("%d\n", bil);
        }
    }

    return 0;
}