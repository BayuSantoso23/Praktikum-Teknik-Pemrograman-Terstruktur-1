// Program tanggal_lahir.c
#include <stdio.h>

int main()
{
    // Deklarasikan struct dengan nama struct dataTanggal
  struct dataTanggal
  {
    // Deklarasikan nama anggota struct tahun, bulan, tanggal bertipe data integer
    int tahun, bulan, tanggal;
  };
  
  // Deklarasikan variabel struct dengan nama variabel tanggalLahir
  struct dataTanggal tanggalLahir;
  
  // Input tanggal, bulan, dan tahun dengan menggunakan struct
  printf("Masukkan tanggal : ");
  scanf("%d", &tanggalLahir.tanggal);
  printf("\nMasukkan bulan :");
  scanf("%d", &tanggalLahir.bulan);
  printf("\nMasukkan tahun : \n");
  scanf("%d", &tanggalLahir.tahun);
  
  // Mencetak tanggal, bulan dan tahun
  printf("%d/%d/%d", tanggalLahir.tanggal, tanggalLahir.bulan, tanggalLahir.tahun);
  
  
  return 0;
  
}