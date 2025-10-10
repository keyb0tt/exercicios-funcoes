// Crie uma função que receba um número e retorne o quadrado desse número.
#include <stdio.h>

int calcQuadrado(int num){
    int quadradoResult = num * num;
    return quadradoResult;
}

int main(){
    int num;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
    printf("\n        Insira um número para calcular seu quadrado: ");
    scanf("%d", &num);
    printf("\n-------------------------------------------------------------\n");

    int result = calcQuadrado(num);
    
    printf("\n                O quadrado de %d é igual a %d\n", num, result);

    printf("\n-------------------------------------------------------------\n");
    printf("\n                      FIM DO PROGRAMA\n");
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");

    return 0;
}