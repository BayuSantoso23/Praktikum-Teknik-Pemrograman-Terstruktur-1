#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    pf = fopen("contohString.txt", "r");
    if (pf == NULL)
    {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    char kar = getc(pf);
    // Digunakan untuk membaca isi file secara berurutan
    // Sehingga menghasilkan keseluruhan isi file
    while (kar != EOF)
    {
        putchar(kar);
        kar = getc(pf); // Tambahkan untuk membaca karakter berikutnya
    }

    fclose(pf);
    return 0;
}
