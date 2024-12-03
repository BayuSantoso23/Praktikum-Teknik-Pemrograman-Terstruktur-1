#include <stdio.h>
#define PANJANG 256
#include <stdlib.h>

int main()
{
    FILE *pf;
    // PANJANG Sudah ditetapkan diatas sebagai 256
    char str[PANJANG];
    char namafile[65];

    printf("Masukkan nama file: ");
    gets(namafile);

    pf = fopen(namafile, "r");
    if (pf == NULL)
    {
        puts("File tidak ditemukan!");
        exit(1);
    }

    //  str = Pointer to array of char where the file will be stored
    //  PANJANG = Maximum length of char to read
    //  pf = Pointer to file
    while (fgets(str, PANJANG, pf) != NULL)
        printf(str);

    fclose(pf);
    return 0;
}
