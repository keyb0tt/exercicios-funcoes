// Crie uma função que receba o ano de nascimento e retorne a idade.
#include <stdio.h>

int conversorIdade(int anoNasc){
    int idade, anoAtual = 2025;

    idade = anoAtual - anoNasc;  

    return idade;
}

int main(){
    int idade, anoNasc;

    printf("\n-------------------------------------------------------------\n");
    printf("\nCálculo de idade por ano de nascimento\n");
    printf("\n-------------------------------------------------------------\n");
    printf("\nInsira o ano de nascimento desejado: ");
    scanf("%d", &anoNasc);

    idade = conversorIdade(anoNasc);
    
    printf("\n-------------------------------------------------------------\n");
    printf("\nA Idade de uma pessoa nascida em %d em 2025 é de %d anos\n", anoNasc, idade);
    printf("\n-------------------------------------------------------------\n");

    return 0;
}