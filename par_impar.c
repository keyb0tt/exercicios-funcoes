// Crie uma função que receba um número e retorne se ele é par ou ímpar.
#include <stdio.h>
#include <stdbool.h>

int parImpar(int num){
    if(num % 2 == 0){
        return true;
    }

    return false;
}

int main(){
    int num;
    bool par;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
    printf("                        Par ou ímpar\n\n");
    printf("                 Insira o número desejado: ");
    scanf("%d", &num);

    par = parImpar(num);
    if(par == true){
        printf("\n                 O número %d é um número par!\n", num);
    } else{
        printf("\n                O número %d é um número ímpar!\n", num);
    }

    printf("\n-------------------------------------------------------------\n");
    printf("\n                      FIM DO PROGRAMA");
    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");

    return 0;
}