#include <stdio.h>
#include <stdbool.h>
int main()
{
printf("Ukuran char : %d\n", sizeof(char));
printf("Ukuran int : %d\n", sizeof(int));
printf("Ukuran short : %d\n", sizeof(short));
printf("Ukuran long : %d\n", sizeof(long));
printf("Ukuran float : %d\n", sizeof(float));
printf("Ukuran double : %d\n", sizeof(double));
printf("Ukuran long double : %d\n", sizeof(long double));
printf("Ukuran bool : %d\n", sizeof(bool));
return 0;
}