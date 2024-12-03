#include <stdio.h>
#include <stdlib.h>

void main(){
    char buff[255];
    FILE *fptr;

    // Opening file
    if ((fptr = fopen("contohString.txt", "r")) == NULL) {
        printf("File not exist");
        // Closing program because file not found
        exit(1);
    }

    // Note : each fgets will only print one line
    // Using sizeof to read multiple line but will need multiple calls
    // Read file
    fgets(buff, sizeof(buff), fptr);
    // print file
    printf("%s", buff);
    // Read file
    fgets(buff, sizeof(buff), fptr);
    // print file
    printf("%s", buff);
    // Read file
    fgets(buff, sizeof(buff), fptr);
    // print file
    printf("%s", buff);

    // Close file
    fclose(fptr);
}