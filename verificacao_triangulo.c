// Crie uma função que receba três lados e verifique se formam um triângulo.
#include <stdio.h>
#include <stdbool.h>

bool verificacaoTriangulo(int l1, int l2, int l3){
    if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        return true;
    }

    return false;
}

int main(){
    int l1, l2, l3;

    printf("\n-------------------------------------------------------------\n");
    printf("\nInsira o primeiro lado (em cm): ");
    scanf("%d", &l1);
    printf("\nInsira o segundo lado (em cm): ");
    scanf("%d", &l2);
    printf("\nInsira o terceiro lado (em cm): ");
    scanf("%d", &l3);
    printf("\n-------------------------------------------------------------\n");

    if(verificacaoTriangulo(l1, l2, l3)){
        printf("\nOs três lados inseridos podem formar um triângulo\n");    
    } else{
        printf("\nOs três lados inseridos não podem formar um triângulo\n");
    }
    printf("\n-------------------------------------------------------------\n");

    return 0;
}