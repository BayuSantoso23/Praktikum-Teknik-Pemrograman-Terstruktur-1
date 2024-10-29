#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    // Contoh Rand
    // Hasil menggunakan seed default sehingga ouput 
    // yang dikeluarkan sama setiap kali kode dieksekusi
    for(i=0; i<5; i++){
        printf("%d\n", rand());
    }

    return 0;
}