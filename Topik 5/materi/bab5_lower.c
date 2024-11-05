#include <stdio.h>

int main(){
    char st[] = "HELLO";

    int i;
    for (i = 0; st[i]; i++){
        st[i] = tolower(st[i]);
        printf("%s\n", st);
    }
    return 0;
}