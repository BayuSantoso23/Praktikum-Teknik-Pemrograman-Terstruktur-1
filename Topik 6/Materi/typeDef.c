// Making alias for unsigned variable
#include <stdio.h>
int main()
{
    typedef unsigned int NAUI;

    NAUI angka = 25;
    
    printf("Isi dari variabel angka adalah : %d", angka);
    
    return 0;
}