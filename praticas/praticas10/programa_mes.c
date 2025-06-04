#include <stdio.h>

enum mes_e {jan=1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};

int main() {
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
                         "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int mes;
    
    printf("Entre com um mes de 1 a 12: ");
    scanf("%i", &mes);
    
    if (jan <= mes && mes <= dez) {
        printf("O mes escolhido foi %s\n", meses[mes-1]);
    } else {
        printf("Mes invalido!\n");
    }
    
    return 0;
}