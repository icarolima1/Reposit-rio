#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[11], palavra2[11];
    
    scanf("%s %s", palavra1, palavra2);
    
    if (strcmp(palavra1, palavra2) >= 0) {
        printf("%s %s\n", palavra2, palavra1);
    } else {
        printf("%s %s\n", palavra1, palavra2);
    }
    
    return 0;
}