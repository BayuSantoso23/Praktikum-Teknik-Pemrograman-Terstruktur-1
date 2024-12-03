#include <stdio.h>

int main ()
{
   FILE *pFile; // Pointer dengan nama pFile
   char kalimat[256];

   printf("Masukkan kalimat yang ingin ditambahkan: ");
   fgets(kalimat, 256, stdin);
   pFile = fopen("mylog.txt", "a");
   fputs(kalimat,pFile); // Menulis string ke dalam file
   fclose(pFile);

   return 0;
}
