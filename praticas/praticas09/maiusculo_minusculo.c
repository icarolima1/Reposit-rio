#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string[11], maiusculo[11], minusculo[11];
    
    scanf("%s", string);
    
    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));
    
    for(int i=0; i<strlen(string); i++) {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }
    
    printf("%s\n%s\n", maiusculo, minusculo);
    
    return 0;
}