#include <stdio.h>

int main (){

    float temperatura = 0;
    printf("Informe a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura >= 40.0f){
        printf("A temperatura esta muito quente!\n");
    }
    else if (temperatura >= 30.0f && temperatura < 40.0f){
        printf("A temperatura esta quente!\n");
    }
    else if (temperatura > 20.0f && temperatura < 30.0f){
        printf("A temperatura esta agradavel!\n");
    }
    else {
        printf("A temperatura esta fria!\n");
    }
    
    return 0;
}