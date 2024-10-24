#include <stdio.h>

int main()
{
    // Deklarasi variabel i, j, k bertipe integer
    int i, j, k;
    
    // Meninputkan nilai variabel i
    printf("Cetak segitiga dari baris:");
    scanf("%d", &i);
    printf("\n");
    
    /* 
    Perulangan for pertama dengan ekspresi pertama menugaskan variabel k dengan i,
    ekspresi kedua seleksi kondisi variabel k kurang dari sama dengan 5
    ekspresi ketiga variabel k increment 
    */
    for(k = i; k <= 5; k++) 
        {
            /* 
            Perulangan for kedua dengan ekspresi pertama menugaskan variabel j dengan 1,
               ekspresi kedua seleksi kondisi variabel j kurang dari sama dengan variabel k
               ekspresi ketiga variabel j increment
            */
            for (j = 1; j <= k; j++){
                // Mencetak simbol *
                printf("* ");
            }
            // Mencetak baris baru
            printf("\n");
        }

  return 0;
}