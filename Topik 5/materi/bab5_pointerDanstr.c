#include <stdio.h>
int main()
{
    char tokoh[] = "Gatotkaca";
    char *ptokoh = "Gatotkaca";

    printf("tokoh = %s\n", tokoh);
    printf("ptokoh = %s\n", ptokoh);

    ptokoh++;
    printf("ptokoh = %s\n", ptokoh);
    
    return 0;
}