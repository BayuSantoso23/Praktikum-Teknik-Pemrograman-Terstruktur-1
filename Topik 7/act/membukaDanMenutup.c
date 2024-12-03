#include <stdio.h>

int main()
{
    FILE *nfPtr;

    nfPtr = fopen("trans.txt", "r"); // Fungsi untuk membuka file bernama trans.txt

    if (nfPtr == NULL)
    {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    fclose(nfPtr); // Fungsi untuk menutup file
}
