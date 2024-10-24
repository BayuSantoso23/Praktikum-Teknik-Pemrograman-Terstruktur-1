#include <stdio.h>

int main()
{
    // Deklarasi variabel num1, num2, dan result bertipe integer
    int num1, num2, result;
    
    // Menugaskan num1 dengan 0
    num1 = 0;

    // Menugaskan num2 dengan 10
    num2 = 10;
    
    // Menugaskan result dengan hasil evaluasi num2 ditambah num1 pre-increment
    result  = ++num1 + num2;

    // Mencetak hasil
    printf("hasil dari result adalah %d", result);


    return 0;
}