// Program perhitungan aritmatika
#include <stdio.h>

// Fungsi main untuk memulai eksekusi program
int main()
{
    printf( "Masukkan 3 angka: \n" ); // Mencetak kalimat

    // Deklarasi variabel x, y, dan z dengan tipe data integer
    int x,y,z ; 
    
    // Deklarasi variabel perkalian, penjumlahan, dan pengurangan
    int hasilkali, hasiljumlah, hasilkurang;
    
    // Membaca input variabel x, y, dan z
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
     
    // Menghitung nilai perkalian, penjumlahan, dan pengurangan dari variabel x, y, dan z
    hasiljumlah = x + y + z;
    hasilkali = x * y * z;
    hasilkurang = x - y - z;
    
    // Cetak output dengan memanggil variabel
    printf("Hasil penjumlahan 3 bilangan: %d\n", hasiljumlah) ; 
    printf("Hasil perkalian 3 bilangan: %d\n", hasilkali) ; 
    printf("Hasil pengurangan 3 bilangan: %d", hasilkurang) ; 
    
    return 0; // Menentukan nilai balik
} // Mengakhiri fungsi main()
