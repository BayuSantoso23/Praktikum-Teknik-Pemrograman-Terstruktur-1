// Assignin data to const int
#include <stdio.h>
int main()
{
    enum namaHari {senin, selasa, rabu, kamis, jumat, sabtu, minggu};
    enum namaHari hari1, hari2;

    hari1 = senin;
    hari2 = sabtu;

    int selisih;
    selisih = hari2 - hari1;

    printf("selisih hari = %d\n", selisih);
    return 0;
}