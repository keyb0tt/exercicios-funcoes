// Crie uma função que receba dois inteiros e retorne o MDC (máximo divisor comum).
#include <stdio.h>

int MDC(int n1, int n2){
    int menorValor = n1;

    if(n2 < n1){
        menorValor = n2;
    }

    for(int i = menorValor; i >= 0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }

    return 0;
}


int main(){
    int n1, n2;

    printf("\n-------------------------------------------------------------\n");
    printf("\nInsira o primeiro número: ");
    scanf("%d", &n1);
    printf("\nInsira o segundo número: ");
    scanf("%d", &n2);
    printf("\n-------------------------------------------------------------\n");
    printf("\nO Máximo Divisor Comum de %d e %d é %d", n1, n2, MDC(n1, n2));
    printf("\n-------------------------------------------------------------\n");

    return 0;
}