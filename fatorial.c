// Crie uma função que receba um número e retorne seu fatorial.
#include <stdio.h>

int fatorial(int num){
    int result = 1;

    for(int i = num; i >= 1; i--){
        result *= i;
    }

    return result;
}

int main(){
    int num, result;
    
    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
    printf("\n                 <-- Cálculo de fatorial -->\n");
    printf("\n          Insira a raíz do cálculo a ser realizado: ");
    scanf("%d", &num);
    result = fatorial(num);
    printf("\n-------------------------------------------------------------\n");
    printf("\n             O cálculo fatorial de %d resulta em %d\n", num, result);
    printf("\n-------------------------------------------------------------\n");
    printf("\n                       FIM DO PROGRAMA\n");
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");

    return 0;
}