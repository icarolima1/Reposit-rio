#include <stdio.h>

int main (){
    float valor_bruto = 0;
    float valor_desconto;
    
    printf("Digite o valor: ");
    scanf("%f", &valor_bruto);

    if (valor_bruto) {
        valor_desconto = valor_bruto * 0.01f;
    }
    else if (valor_bruto <= 500.f){
        valor_desconto = valor_bruto * 0.05f;
    }
    else {
        valor_desconto = valor_bruto * 0.1f;
    }

    printf("O valor bruto eh %.2f e do desconto eh %.2f\n", valor_bruto, valor_desconto);

    return 0;
}