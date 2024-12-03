#include <stdio.h>

int main()
{
    int kode;
    char namafile_lama[65], namafile_baru[65];

    printf("Masukkan nama file yang akan diganti: ");
    gets(namafile_lama);

    printf("Masukkan nama file pengganti: ");
    gets(namafile_baru);

    kode = rename(namafile_lama, namafile_baru);

    if (kode == -1)
        printf("Gagal mengganti nama file\n");
    else
        printf("Nama file berhasil diganti\n");

    return 0;
}
