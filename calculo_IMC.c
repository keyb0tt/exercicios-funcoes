// Crie uma função que calcule o IMC e indique a classificação.
#include <stdio.h>
#include <stdlib.h>

void clear(){
    system("clear");
}

void header(){
    system("clear");
    printf("\n                  Cálculo do IMC\n");
    printf("\n--------------------------------------------------\n\n");
}

void divisor(){
    printf("\n--------------------------------------------------\n\n");
}


float calculoImc(float peso, float altura){
    float imc = peso / (altura * altura);
    
    return imc;
}


void classImc(float imc){
    if(imc >= 30){
        printf("\n\n ~> Categoria IMC: Obesidade\n");
    } else if(imc <= 29.9 && imc >= 25){
        printf("\n\n ~> Categoria IMC: Sobrepeso\n");
    } else if(imc <= 24.9 && imc >= 18.5){
        printf("\n\n ~> Categoria IMC: Peso normal\n");
    } else if(imc < 18.5){
        printf("\n\n ~> Categoria IMC: Abaixo do peso\n");
    }
}

void caracteristicas(float peso, float altura, float imc){
    printf(" ~> Peso: %.0fkg\n", peso);
    printf("\n ~> Altura: %.2fm\n", altura);
    printf("\n ~> IMC: %.1f\n", imc);
    classImc(imc);
    divisor();
}

int main(){
    header();
    float peso, altura;

    for(int i = 1; i <= 2; i++){
        if(i == 1){
            printf(" ~> Insira sua altura (m): ");
            scanf("%f", &altura);
            header();
            continue;
        } else {
            printf(" ~> Insira seu peso (kg): ");
            scanf("%f", &peso);
            header();
        }
    }
    
    float imc = calculoImc(peso, altura);
    caracteristicas(peso, altura, imc);

    return 0;
}