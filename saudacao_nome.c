// Crie uma função que receba o nome de uma pessoa e o exiba com uma saudação.
#include <stdio.h>
#include <stdlib.h>

void clear(){
    system("clear");
}

void saudacoes(const char nome[20]){
    printf("\nOlá %s, seja bem vindo!\n", nome);
}

int main(){
    char nome[20];

    clear();
    printf("--------------------------------------------------\n");
    printf("\nComo você se chama?\n\n");
    scanf("%19s", nome);
    clear();
    printf("--------------------------------------------------\n");
    saudacoes(nome);
    printf("\n--------------------------------------------------\n\n");

    return 0;
}