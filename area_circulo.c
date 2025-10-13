// Crie uma função que calcule e retorne a área de um círculo.
#include <stdio.h>

float areaCirculo(float raio){
    float area;
    const float PI = 3.1415;

    area = PI * (raio * raio);

    return area;
}

int main(){
    int metodo;
    float diametro, raio, area;

    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~~^~^~^~^~^~~^~^~^~^~\n");
    printf("\n                           Cálculo da área do círculo\n");
    
    do{
        printf("\n  1. Cálculo usando o diâmetro\n  2. Cálculo usando o raio\n  0. Encerrar o programa\n\n  Método: ");
        scanf("%d", &metodo);

        if(metodo == 1){
            printf("\n---------------------------------------------------------------------------------\n");
            printf("\n                     Insira o diâmetro do círculo (em cm): ");
            scanf("%f", &raio);
            
            raio /= 2;
            metodo = 100;
        } else if(metodo == 2){
            printf("\n---------------------------------------------------------------------------------\n");
            printf("\n                       Insira o raio do círculo (em cm): ");
            scanf("%f", &raio);
            
            metodo = 100;
        } else if(metodo == 0){
            printf("\n---------------------------------------------------------------------------------\n");
            printf("\n                               FIM DO PROGRAMA\n");
            printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~~^~^~^~^~^~~^~^~^~^~\n");
            return 0;
        } else{
            printf("\n---------------------------------------------------------------------------------\n");
            printf("\nMétodo inválido\n");
            printf("\n---------------------------------------------------------------------------------\n");
        } if(metodo == 100){
            area = areaCirculo(raio);
            
            printf("\nA área de um círculo com o valor do raio igual a %.2f cm resulta em %.2f cm\n", raio, area);
            break;
        }
    } while(metodo != 0);

    printf("\n--------------------------------------------------------------------------------\n");
    printf("\n                                 FIM DO PROGRAMA\n");
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~~^~^~^~^~^~~^~^~^~^~\n");

    return 0;
}
