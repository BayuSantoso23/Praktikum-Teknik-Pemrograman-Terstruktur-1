#include <stdio.h>

int main()
{
    int kode;
    char namafile[65];

    printf("Masukkan nama file yang akan dihapus: ");
    gets(namafile);

    kode = unlink(namafile);

    if (kode == -1)
        printf("Gagal menghapus file\n");
    else
        printf("File berhasil dihapus\n");

    // Atau dapat menggunakan delete
    // if (remove("coba.txt") == 0)
    // printf("Berhasil menghapus");
    // else
    // printf("Tidak dapat menghapus file tersebut");
    // return 0;

    return 0;
}
