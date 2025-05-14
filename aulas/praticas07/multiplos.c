#include <stdio.h>

int main(){

    int numero = 0;
    printf("Digite um numero entre 1 e 100: ");
    scanf("%i", &numero);

    for(int i = 1; i <= 101; i++) {   
        if (i % numero == 0) {
        printf("%i eh multiplo de %i\n", numero, i);
    } 
    else{
        printf("%i nao eh multiplo de %i\n", numero, i);
    } 
    }
    
    return 0;
}