// Crie uma função que receba um número e retorne a soma dos seus dígitos.
#include <stdio.h>

int somaDigitos(int num){
    int soma = 0, digito;
    int numCopia = num;

    while(numCopia > 0){
        digito = numCopia % 10;
        soma += digito;
        numCopia /= 10;
    }

    return soma;
}

int main(){
    int num, soma = 0;

    printf("\n-------------------------------------------------------------\n");
    printf("\nDigite um número para somar seus digitos: ");
    scanf("%d", &num);
    printf("\n-------------------------------------------------------------\n");
    printf("\nA Soma dos dois dígitos é igual a %d\n", somaDigitos(num));
    printf("\n-------------------------------------------------------------\n");

    return 0;
}
