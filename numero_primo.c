// Crie uma função que receba um número inteiro e retorne verdadeiro se for primo, falso caso contrário.
#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
    int i = num, divisores = 0;
    bool primoStatus;

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            divisores++;
        }
    }

    if(divisores == 2){
        primoStatus = true;
    } else{
        primoStatus = false;
    }

    return primoStatus;
}

int main(){
    int num;
    bool primoStatus;

    printf("\n---------------------------------------------------\n");
    printf("\n  Verificador de números primos\n");
    printf("\n  Digite o número a ser verificado: ");
    scanf("%d", &num);
    printf("\n---------------------------------------------------\n");

    primoStatus = primo(num);

    if(primoStatus == true){
        printf("\n  O Número inserido é um número primo\n");
    } else if(primoStatus == false){
        printf("\n  O Número inserido não é um número primo\n");
    }
    printf("\n---------------------------------------------------\n");


    return 0;
}