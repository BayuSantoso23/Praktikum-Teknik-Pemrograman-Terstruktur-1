#include <stdio.h>

int main()
{
    /* Deklarasi variabel array matriks1 dengan 2 baris dan 2 kolom,
    matriks2 dengan 2 baris 1 kolom, dan hasil dengan 2 baris 1 kolom*/
    int matriks1[2][2],
        matriks2[2][1],
        hasil[2][1] = {0}; // Inisialisasi hasil dengan 0

    // Deklarasi variabel i, j, k
    int i, j, k;

    printf("Masukkan elemen matriks pertama: \n");
    // Iterasi untuk baris (i) pada matriks pertama
    for(i = 0; i < 2; i++) {
        // Iterasi untuk kolom (j) pada matriks pertama
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &matriks1[i][j]);
        }
    }

    printf("Masukkan elemen matriks kedua: \n");
    // Iterasi untuk baris (i) pada matriks kedua
    for(i = 0; i < 2; i++){
        // Iterasi untuk kolom (j) pada matriks kedua
        for(j = 0; j < 1; j++){
            scanf("%d", &matriks2[i][j]);
        }
    }

    // Perkalian matriks
    for(i = 0; i < 2; i++) { // Iterasi untuk setiap baris hasil
        for(j = 0; j < 1; j++) { // Iterasi untuk setiap kolom hasil
            hasil[i][j] = 0; // Inisialisasi hasil[i][j] sebelum penjumlahan
            for(k = 0; k < 2; k++){ // Iterasi untuk mengalikan elemen
                hasil[i][j] += matriks1[i][k] * matriks2[k][j]; // Perkalian dan penjumlahan
            }
        }
    }

    printf("Hasil perkalian matriks: \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 1; j++) {
            printf("%d\n", hasil[i][j]); // Menambahkan newline setelah setiap elemen
        }
    }

    return 0;
}
