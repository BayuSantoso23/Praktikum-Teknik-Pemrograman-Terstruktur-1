#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pf;
    char kar;
    int kode;
    struct {
        int x;
        int y;
    } koordinat;

    pf = fopen("koordinat.dat", "r");
    if (pf == NULL) {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    while ((kode = fscanf(pf, "%5d%5d%c", &koordinat.x, &koordinat.y, &kar)) != EOF) {
        if (kode != 3) {
            printf("Ada format yang salah!");
            exit(1);
        }
        printf("%5d %5d\n", koordinat.x, koordinat.y);
    }

    fclose(pf);
    return 0;
}
