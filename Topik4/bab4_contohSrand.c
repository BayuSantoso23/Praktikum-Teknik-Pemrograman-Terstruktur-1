#include <stdio.h>
#include <stdlib.h>

int main(){

    // Contoh Srand dengan kustomisasi seed, hasil akan tetap sama karena seed yang ditaruh merupakan 
    // angka statis sehingga lebih sering digunakan dengan pemasangan time agar membuat perbedaan output 
    srand(10);
    
    int i;

    for(i=0; i<5; i++){
        printf("%d\n", rand());
    }

    return 0;
}