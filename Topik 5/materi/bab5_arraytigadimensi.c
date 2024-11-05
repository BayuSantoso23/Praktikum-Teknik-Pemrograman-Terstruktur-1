#include <stdio.h>

int main(){
    char *dataMhs[3][3][3] = 
    {
        {
            {"Aji", "50423123", "Pegawai"},
            {"Bayu", "50423456", "Pegawai"},
            {"Iwan", "50423789", "Pegawai"}
        },
        {
            {"Iwan", "50423321", "Mhs"},
            {"Arci", "50423654", "Mhs"},
            {"Ilham", "50423987", "Mhs"}
        },
        {
            {"Budi", "50423563", "Vlogger"},
            {"Cahyono", "50423235", "Vlogger"},
            {"Cahyadi", "50423643", "Vlogger"}
        }
    };

    int i,j,k;
    printf("Nama\t\tID\t\t\tJob\n");
    printf("--------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                printf("%s\t\t", dataMhs[i][j][k]);
            }
            printf("\n");
        }
        printf("--------------------------------------------------------------------\n");
    }
}