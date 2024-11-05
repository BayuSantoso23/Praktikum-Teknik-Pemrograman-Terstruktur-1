#include <stdio.h>

int alpha();

// Global variable that can be accessed in any function
int y = 5;

int main(){
    int x = 20;

    printf("Di main(): x = %d\n", x);
    alpha();
    printf("Di main(): y = %d\n", y);

    return 0;
}

int alpha(){
    int x = 10;

    printf("Di alpha(): x = %d\n", x);

    // Inceremeting global variable
    y++;
    return x;
}