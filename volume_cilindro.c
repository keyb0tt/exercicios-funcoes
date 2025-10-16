#include <stdio.h>
#include <stdlib.h>

void clear(){
    system("clear");
}

int numQuadrado(int num){
    int result = num * num;

    return result;
}

float cilindroCalc(float raio, float altura){
    float volume, pi = 3.14;

    volume = pi * numQuadrado(raio) * altura;

    return volume;
}

int main(){
    clear();
    float raio, altura;
    
    for(int i = 1; i <= 2; i++){
        printf("\n                Volume do cilindro\n");
        printf("\n--------------------------------------------------\n");
        if(i == 1){
            printf("\nInsira o valor da altura (em cm): ");
            scanf("%f", &altura);
            clear();
            continue;
        } else {
            printf("\nInsira o valor do raio (em cm): ");
            scanf("%f", &raio);
            clear();
        }

        printf("\n                Volume do cilindro\n");
        printf("\n--------------------------------------------------\n");
        printf("\n            Características do cilindro\n");
        printf("\n    -------------------------------------------\n");

        printf("\n                 Altura: %.1f cm\n                  Raio: %.1f cm\n", altura, raio);
        printf("\n    -------------------------------------------\n");
        printf("\n           Resultado do volume: %.1f\n", cilindroCalc(raio, altura));
        printf("\n--------------------------------------------------\n");

    }


    return 0;
}