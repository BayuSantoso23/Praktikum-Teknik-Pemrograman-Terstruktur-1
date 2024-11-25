#include <stdio.h>

enum months 

{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main ()
{
    const char *monthName[] = {
         "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December" 
    };
    
    for (enum months month = APR; month <= AUG; ++month)

    { 
        printf("%d\n", month);
    }
    
}