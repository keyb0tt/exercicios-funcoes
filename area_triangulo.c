// Crie uma função que receba a base e a altura de um triângulo e retorne sua área.
#include <stdio.h>
#include <stdlib.h>

void clear(){
    system("clear");
}

void header(){
    system("clear");
    printf("\n                Área do triângulo\n");
    printf("\n--------------------------------------------------\n\n");
}

void divisor(){
    printf("\n--------------------------------------------------\n\n");
}

float areaTriangulo(float base, float altura){
    float area = (base * altura) / 2;

    return area;
}


int main(){
    header();
    float base, altura;

    for(int i = 1; i <= 2; i++){
        if(i == 1){
            printf(" ~> Insira a altura do triângulo: ");
            scanf("%f", &altura);
            clear();
            continue;
        }

        header();
        printf(" ~> Insira a base do triângulo: ");
        scanf("%f", &base);
        clear();
    }

    header();
    printf("          Características do triângulo\n");
    divisor();
    printf(" ~> Altura: %.1f\n", altura);
    printf(" ~> Base: %.1f\n", base);
    printf("\n -> ( Área: %.1f )\n", areaTriangulo(base, altura));
    divisor();

    return 0;
}