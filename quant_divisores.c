// Crie uma função que receba um número e retorne quantos divisores ele possui.
#include <stdio.h>

int calcDivisores(int num){
    int quantDivisores = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            quantDivisores++;
        }
    }

    return quantDivisores;
}

int main(){
    int num;

    printf("\n-------------------------------------------------------------\n");
    printf("\nDigite o número desejado: ");
    scanf("%d", &num);
    printf("\n-------------------------------------------------------------\n");
    printf("\nO Número %d possui %d divisores\n", num, calcDivisores(num));
    printf("\n-------------------------------------------------------------\n");

    return 0;
}