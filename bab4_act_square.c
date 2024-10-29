// Program square.c
#include <stdio.h>

// Fungsi prototype dengan nama fungsi square dan argument bertipe data integer
int square(int sisi);

// Fungsi main untuk memulai eksekusi program
int main()
{
    // Mendeklarasikan variabel a dengan tipe data integer
    int a;
    
    // Menginputkan nilai panjang sisi dari persegi
    printf("Masukkan panjang sisi dari persegi:");
    scanf("%d", &a);
    printf("\n");
	
	// Mencetak output dengan memanggil fungsi square
	square(a);
} // Mengakhiri fungsi main()
    
// Mendefinisikan fungsi square
int square(int sisi)
{
    // Gunakan statement return x * x untuk mengembalikan nilai
    int x = sisi;
    int nilai = x * x;

    printf("Persegi dengan sisi %d, luasnya adalah: %d", x, nilai);
    return x;	
} // Mengakhiri fungsi square()