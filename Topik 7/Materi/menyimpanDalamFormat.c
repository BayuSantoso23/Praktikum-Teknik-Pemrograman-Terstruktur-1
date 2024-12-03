#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pf;
    char jawaban;
    struct {
        int x;
        int y;
    } koordinat;

    pf = fopen("koordinat.dat", "w");
    if (pf == NULL) {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    do {
        printf("Masukkan data koordinat (integer)\n");
        printf("Format: posisi_x posisi_y\n");
        printf("Contoh: 20 30 ENTER\n");
        scanf("%d %d", &koordinat.x, &koordinat.y);
        fflush(stdin);
        fprintf(pf, "%5d %5d\n", koordinat.x, koordinat.y);
        printf("Mau masukkan data lagi (Y/T)? ");
        jawaban = getchar();
    } while (jawaban == 'Y' || jawaban == 'y');

    fclose(pf);
    return 0;
}
