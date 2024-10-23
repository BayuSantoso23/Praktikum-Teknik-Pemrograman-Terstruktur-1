#include <stdio.h>

int main() 
{
    // Mendeklarasikan variabel nilaiUTS, nilaiUAs, dan nilaiAkhir dengan tipe data integer
    int nilaiUTS, nilaiUAS, nilaiAkhir;
    
    printf("Masukkan nilai UTS anda: ");
    scanf("%d", &nilaiUTS); // Membaca nilai input sebagai variabel nilaiUTS
    printf("Masukkan nilai UAS anda: ");
    scanf("%d", &nilaiUAS); // Membaca nilai input sebagai variabel nilaiUAS
    
    nilaiAkhir = ((0.7 * nilaiUTS) + (0.3 * nilaiUAS));
    
    // Block if jika nilaiAkhir lebih besar sama dengan 75 maka dinyatakan lulus
    if(nilaiAkhir >= 75)
    {
        printf("Nilai akhir anda adalah %d\n", nilaiAkhir);
        printf("Selamat! Anda dinyatakan lulus!");
    }
    
    // Block else jika block if tidak terpenuhi
    else
    {
        printf("Nilai akhir anda adalah %d\n", nilaiAkhir);
        printf("Maaf, anda harus melakukan pengulangan!");
    }
    
    return 0;
}