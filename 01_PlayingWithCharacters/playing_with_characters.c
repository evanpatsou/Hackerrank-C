#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    // Read a character
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    // Read a string
    char s[100];
    scanf("%s", s);
    printf("%s\n", s);
    
    // Note
    scanf("\n");
    
    // Read a setence
    char sen[200];
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
    
    return 0;
}