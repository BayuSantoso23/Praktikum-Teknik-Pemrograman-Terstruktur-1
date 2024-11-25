#include <stdio.h>
#define PHI 3.14

// Deklarasi Union dengan nama lingkaran
union lingkaran{
    float keliling;// Deklarasi elemen keliling bertipe data float
    float luas;// Deklarasi elemen luas bertipe data float
};

void hit_kll(union lingkaran *lkrn, float r);
void hit_luas(union lingkaran *lkrn, float r);

int main(void){
    
    // Deklarasi variabel r bertipe data float
    float r;
    // Deklarasi union dengan nama object lk
    union lingkaran lk;

    // Input panjang jari-jari
    printf("Masukkan panjang jari-jari : ");
    scanf("%f", &r);// Pemanggilan variabel r
    
    hit_kll(&lk, r);
    printf("\nKeliling lingkaran : %.2f",lk.keliling);// Mengakses union keliling
    hit_luas(&lk, r);
    printf("\nLuas Lingkaran : %.2f\n",lk.luas);// Mengakses union luas
}

void hit_kll(union lingkaran *lkrn, float r){
    lkrn->keliling = 2 * PHI * r;
}

void hit_luas(union lingkaran *lkrn, float r){
    (*lkrn).luas = PHI * r * r;
} 