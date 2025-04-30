#include <stdio.h>

int main (){

    int dia = 0;
    printf("Informe um numero de 1 a 7: ");
    scanf("%i", &dia);

    switch (dia){
        case 1: printf("Eh um domingo\n"); break;
        case 2: printf("Eh uma segunda feira\n"); break;
        case 3: printf("Eh uma terca feira\n"); break;
        case 4: printf("Eh uma quarta feira\n"); break;
        case 5: printf("Eh uma quinta feira\n"); break;
        case 6: printf("Eh uma sexta feira\n"); break;
        case 7: printf("Eh um sabado\n"); break;
        default: printf("O numero informado eh invalido\n");
    }

    return 0;
}