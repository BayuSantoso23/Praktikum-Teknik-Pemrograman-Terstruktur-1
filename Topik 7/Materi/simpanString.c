#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    char kar;
    char penampung[256];
    int indeks;

    pf = fopen("simpanString.txt", "w");
    if (pf == NULL){
        puts("File tidak dapat dibuat!");
        exit(1);
    }

    printf("Masukkan sebuah kalimat: \n");
    gets(penampung);
    indeks = 0;
    while (penampung[indeks] != 0){
        kar = penampung[indeks];
        fputc(kar, pf);
        indeks++;
    }

    fclose(pf);
    printf("Data telah disimpan");

    return 0;
}