#include <stdio.h>

int main()
{
	// Mendeklarasikan variabel dengan tipe data int
	int nilaiBella, nilaiArthur;

    // Mencetak output dan meminta input ke pengguna
    printf("Masukkan nilai yang berbeda pada kedua nilai berikut!\n");
    
	printf("Nilai final Bella : \n");
	scanf("%i", &nilaiBella);
	
	printf("Nilai final Arthur : \n");
	scanf("%i", &nilaiArthur );
	printf("\n");

	if (nilaiBella > nilaiArthur )
		printf("Selamat kepada Bella sebagai pemenang Virtual Math Competition 2021 dengan poin %i!\n", nilaiBella);
	else
		printf("Selamat kepada Arthur sebagai pemenang Virtual Math Competition 2021 dengan poin %i!\n", nilaiArthur);

    return 0;
}