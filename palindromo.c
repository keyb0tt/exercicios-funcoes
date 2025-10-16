// Crie uma função que receba um número inteiro e retorne se ele é palíndromo.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void clear(){
    system("clear");
}

void header(){
    system("clear");
    printf("\n           ~ Verificador de Palíndromo ~\n");
    printf("\n--------------------------------------------------\n\n");
}

void divisor(){
    printf("\n--------------------------------------------------\n\n");
}


bool checkPal(int numero){
    int numeroRaiz = numero, numeroReverso = 0, digito;

    while(numero != 0){
        digito = numero % 10;
        numeroReverso = numeroReverso * 10 + digito;
        numero /= 10; 
    }

    if(numeroRaiz == numeroReverso){
        return true;
    } else {
        return false;
    }
}

int main(){
    header();
    int numero;

    printf(" ~> Dígite o número desejado: ");
    scanf("%d", &numero);
    divisor();

    bool palindromo = checkPal(numero);
    if(palindromo == true){
        header();
        printf(" ~> O Número %d é um Palíndromo\n", numero);
        divisor();
        return 0;
    } else {
        header();
        printf(" ~> O Número %d não é um Palíndromo\n", numero);
        divisor();
        return 0;
    }

    return 0;
}