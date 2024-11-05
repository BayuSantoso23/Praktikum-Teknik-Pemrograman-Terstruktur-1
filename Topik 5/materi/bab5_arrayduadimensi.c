#include <stdio.h>

int main(){
    printf("Nama\t\tNPM\t\t\tJurusan\n");
    char *dataMhs[3][3] = {
        {"Iwan", "50423123", "Psikologi"},
        {"Budi", "50423123", "Striker"},
        {"Noval", "50423123", "Point Guard"}
    };

    int i,j;
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%s\t\t", dataMhs[i][j]);
        }    
        printf("\n");
    }

    return 0;
}