#include <stdio.h>
#include <ctype.h> // Untuk fungsi toupper

int main()
{
    // Mendeklarasikan string s2 dan memberi variabel yang sesuai
    char s2[] = "jill";
    
    // Menugaskan string s2 dengan fungsi toupper disertai dengan variabel yang sesuai
    s2[2] = toupper(s2[2]);
    
    // Mencetak string s2
    printf("%s\n", s2);
    
    return 0;
}
