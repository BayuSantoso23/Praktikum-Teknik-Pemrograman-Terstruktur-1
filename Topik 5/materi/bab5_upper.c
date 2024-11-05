#include <stdio.h>

int main(){
    char st[] = "hello";

    int i;
    for (i = 0; st[i]; i++){
        st[i] = toupper(st[i]);
        printf("%s\n", st);
    }
    return 0;
}