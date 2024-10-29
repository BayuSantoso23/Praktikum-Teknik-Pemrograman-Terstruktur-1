// Program C untuk menampilkan bobot poin dari total nilai mahasiswa
#include <stdio.h>

// Deklarasi fungsi bobotPoint dengan parameter variabel nilai bertipe data integer
int bobotPoin(int nilai);

// Fungsi main untuk mengeksekusi program
int main()
{
    // Deklarasi variabel nilai bertipe data integer
	int nilai;
    
    // Mencetak output dan memasukkan nilai ke variabel
	printf("Masukkan nilai rata-rata Mahasiswa:\n");
	scanf("%d", &nilai);
    
    // Mencetak output bobot nilai
	printf("Bobot poin nilai rata-rata Mahasiswa: %d", bobotPoin(nilai) );

	return 0;

}

// Definisi fungsi bobotPoin untuk seleksi kondisi nilai
int bobotPoin(int nilai)
{
    // Statement if untuk setiap kondisi nilai sesuai dengan bobot poin sesuai tabel
    if(nilai >= 90)
        return 4;
    if(nilai >= 80)
        return 3;
    else if(nilai >= 70)
		return 2;
	else if(nilai >= 60)
		return 1;
	else    
		return 0;
}

