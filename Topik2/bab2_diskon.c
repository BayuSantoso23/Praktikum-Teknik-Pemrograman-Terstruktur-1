#include <stdio.h>

int main(){

    float totalBelanja, diskon, totalBayar;

    printf("Total belanja Kamu adalah : Rp. ");
    scanf("%f", &totalBelanja);

    if(totalBelanja <= 100000){
        diskon = 0;
        totalBayar = totalBelanja - diskon;
        printf("Maaf, Anda belum mendapatkan diskon.\n");
        printf("Total pembayaran Anda adalah : Rp. %.2f", totalBayar);
    }else if(totalBelanja > 100000 && totalBelanja < 100000){
        diskon = 0.2 * totalBelanja;
        diskon = totalBelanja - diskon;
        printf("Selamat! Anda mendapatkan diskon sebesar Rp. %.2f\n", diskon);
        printf("Maka total pemyaran Kamu adalah : Rp. %.2f", totalBayar);
    }else{
        diskon = 0.2 * totalBelanja;
        totalBayar = totalBelanja - diskon;
        printf("Selamat! Anda mendapatkan diskon sebesar Rp. %.2f\n", diskon);
        printf("Maka total pembayaran Kamu adalah : Rp. %.2f", totalBayar);
    }

    return 0;
}