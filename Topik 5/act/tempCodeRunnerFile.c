#include <stdio.h>

int main()
{
    
  char *data_mhs[2][3][3] = // Mendeklarasikan array pointer data_mhs bertipe data char dengan indeks [2][3][3]
  {
    {{"Atika","Ferdi", "Budi"},
     {"Kayla", "Jesica", "Michael"},
     {"Andrean", "Karina", "Julian"}},
    {{"Layla","Farida", "Meily"},
     {"Firman", "Anita", "Gita"},
     {"Jonathan", "Lola", "Fikri"}}

  };
// Tampilkan data mahasiswa
  int i,j,k; // Deklarasi variabel i, j, k
  
  printf("Masukkan indeks hari: ");
  scanf("%d", &i);
  printf("\n");
  printf("Masukkan indeks sesi: ");
   scanf("%d", &j);
  printf("\n");
  printf("Masukkan indeks mahasiswa: ");
   scanf("%d", &k);
  printf("\n");
  

  printf ("Data peserta lolos seleksi asisten :\n");
  // Iterasi indeks kesatu (i)
  for(int satu = 0;satu<1;satu++)
     // Iterasi indeks kedua (j)
     for(int dua = 0;dua<1;dua++)
        // Iterasi indeks ketiga (k)
        for(int tiga = 0;tiga<1;tiga++)
        {
            printf("Hari ke-%d | Sesi ke-%d = %s\n", i+1,j+1,data_mhs[i][j][k++]);
        }

  return 0;
  
} 
