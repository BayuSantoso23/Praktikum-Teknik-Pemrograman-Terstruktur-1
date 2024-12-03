#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PANJANG 256

int main()
{
    FILE *pf_inp, *pf_out;
    char str[PANJANG];
    char namafile_inp[65], namafile_out[65];

    printf("Program untuk menyalin file teks\n");
    printf("Dalam hal ini, setiap huruf kecil\n");
    printf("diganti dengan huruf kapital\n");
    printf("Nama file masukan: ");
    gets(namafile_inp);
    printf("Nama file keluaran: ");
    gets(namafile_out);

    pf_inp = fopen(namafile_inp, "r");
    if (pf_inp == NULL)
    {
        puts("File tidak ditemukan!");
        exit(1);
    }

    pf_out = fopen(namafile_out, "w");
    if (pf_out == NULL)
    {
        puts("File tidak ditemukan!");
        exit(1);
    }

    while (fgets(str, PANJANG, pf_inp) != NULL)
    {
        strupr(str);
        fputs(str, pf_out);
    }

    fclose(pf_inp);
    fclose(pf_out);
    return 0;
}
