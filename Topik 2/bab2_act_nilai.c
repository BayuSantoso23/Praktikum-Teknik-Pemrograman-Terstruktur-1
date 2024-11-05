#include <stdio.h>

int main()
{
    // Input variabel nilai
    int nilai;
    printf("Masukkan Nilai = \n");
    scanf("%d", &nilai);
    
    // Statement if untuk kondisi nilai lebih besar atau sama dengan 80
    if(nilai >= 80)
    {
        printf("Nilai Anda baik"); // Statement printf untuk mencetak output jika kondisi benar
    }
    else
    {
        printf("Nilai Anda kurang baik"); // Statement printf untuk mencetak output jika kondisi salah
    }
    
    return 0;
} 