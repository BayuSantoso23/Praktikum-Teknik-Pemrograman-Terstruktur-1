#include <stdio.h>

int main(){
    struct dataTanggaLahir{
        int tanggal;
        int bulan;
        int tahun;
    };

    struct dataTanggaLahir data1;

    data1.tanggal = 10;
    data1.bulan = 11;
    data1.tahun = 12;

    printf("%d/%d/%d", data1.tanggal, data1.bulan, data1.tahun);

    return 0;
}