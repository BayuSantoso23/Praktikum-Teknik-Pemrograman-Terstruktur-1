// Program perhitungan penjumlahan angka1 dan angka2
// header stdio.h
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    printf( "Masukkan 2 angka untuk dihitung: \n" ); // Mencetak output kalimat

    // Deklarasi variabel angka1 dan angka2 dengan tipe data integer
    int angka1, angka2;
    
    // Deklarasi variabel penjumlahan dan pengurangan dengan tipe data integer
    int hasiljumlah, hasilkurang;
    
    // Membaca input variabel angka1 dan angka2
    scanf("%d", &angka1); 
    scanf("%d", &angka2); 
    
    // Menghitung nilai penjumlahan dan pengurangan dari variabel angka1 dan angka2
    hasiljumlah = angka1 + angka2;
    hasilkurang = angka1 - angka2;

    // Cetak output dengan memanggil variabel
    // Menampilkan hasil penjumlahan
    printf("Hasil penjumlahan 2 bilangan: %d\n", hasiljumlah); 

    // Menampilkan hasil pengurangan
    printf("Hasil pengurangan 2 bilangan: %d\n", hasilkurang); 
    
    return 0; // Menentukan nilai balik
} // Mengakhiri fungsi main()