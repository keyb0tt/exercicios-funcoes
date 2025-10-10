// Crie uma função que receba dois números e retorne o menor deles.
#include <stdio.h>

int menorNum(int n1, int n2){
    int menor;

    if(n1 < n2){
        menor = n1;
    } else if(n1 > n2){
        menor = n2;
    } else if(n1 == n2){
        menor = 0;
    }

    return menor;
}

int main(){
    int n1, n2;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
    printf("\n                Preencha o primeiro número: ");
    scanf("%d", &n1);
    printf("\n                Preencha o segundo número:  ");
    scanf("%d", &n2);
    printf("\n-------------------------------------------------------------\n");
    printf("\n                       Números inseridos\n");
    printf("\n                         Número 1: %d\n", n1);
    printf("\n                         Número 2: %d\n", n2);
    printf("\n-------------------------------------------------------------\n");
    int menor = menorNum(n1, n2);

    if(menor == 0){
        printf("\n        Ambos os números inseridos possuem o mesmo valor\n");
        printf("\n-------------------------------------------------------------\n");
        printf("\n                        FIM DO PROGRAMA\n");
        printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");

        return 0;
    }
    
    printf("\nO Menor número inserido foi %d", menor);



    return 0;
}