#include <stdio.h>
#include <string.h>

struct dataMahasiswa
{
    char nama[10];
    char npm[10];
    float ipk;
};

int main(){
    int i;

    struct dataMahasiswa mhs[10];

    // Inputan Data Nama
    for(i=0;i<2;i++){
        printf("Input Nama: ");
        scanf("%s", &mhs[i].nama);
        printf("Input npm : ");
        scanf("%s", &mhs[i].npm);
        printf("Input ipk : ");
        scanf("%f", &mhs[i].ipk);

        printf("======================\n");
    }

    // Print Data
    for(i=0;i<2;i++){
        printf("Nama : %s\t NPM : %s\t IPK : %.2f\n", mhs[i].nama,mhs[i].npm,mhs[i].ipk);
    }

    return 0;
}