#include <stdio.h>

int main()
{
    // Mendeklarasikan variabel c dengan tipe data karakter
    char c;
    
    printf("Silahkan masukkan karakter: \n");
    // Membaca nilai yang diinputkan sebagai variabel c
    scanf("%c", &c);

    if (c >='a' && c <= 'z')
        printf("Karakter %c merupakan HURUF KECIL\n", c);
    else if (c >= 'A' && c <= 'Z')
        printf("Karakter %c merupakan HURUF BESAR", c);
    else if (c >= '0' && c <= '9')
        printf("Karakter %c merupakan ANGKA", c);
    else if (c >= '!' && c <= '?')
        printf("Karakter %c merupakan KARAKTER KHUSUS", c);

    return 0;
}