// Crie uma função que receba três números e retorne a média aritmética.
#include <stdio.h>

float calcMedia(float n1, float n2, float n3){
    float soma = n1 + n2 + n3;
    float media = soma / 3;
    return media;
}

int main(){
    float n1, n2, n3;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
    printf("\n                     Cálculo de média\n");
    printf("\n-------------------------------------------------------------\n");
    printf("\n                Insira o primeiro número: ");
    scanf("%f", &n1);
    printf("\n                Insira o segundo número:  ");
    scanf("%f", &n2);
    printf("\n                Insira o terceiro número: ");
    scanf("%f", &n3);
    printf("\n-------------------------------------------------------------\n");

    float soma = n1 + n2 + n3;
    printf("\n            A soma dos números resulta em %.2f\n", soma);
    
    float media = calcMedia(n1, n2, n3);
    printf("\n  A Média aritmética dos valores inseridos resulta em %.2f\n", media);

    printf("\n-------------------------------------------------------------\n");
    printf("\n                      FIM DO PROGRAMA\n");
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");


    return 0;
}