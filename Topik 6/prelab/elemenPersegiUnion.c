#include <stdio.h>

int main() {
    // Deklarasi union dengan nama union elemenPersegi
    union elemenPersegi {
        int sisi1;
        int sisi2;
    };

    // Deklarasi union dengan variabel Persegi dan menugaskannya dengan nilai {6}
    union elemenPersegi Persegi = {6}; // Angka 6 otomatis masuk ke dalam sisi1

    // Inisialisasi pointer *ptr dan menugaskannya dengan alamat Persegi
    union elemenPersegi *ptr = &Persegi;

    // Inisialisasi variabel nilai dan menugaskannya dengan sisi1 * sisi2 menggunakan pointer
    int nilai = Persegi.sisi1 * ptr->sisi2;

    // Mencetak nilai Luas Persegi
    printf("Luas Persegi adalah = %d\n", nilai);

    return 0;
}
