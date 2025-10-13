// Crie uma função que receba uma temperatura em Celsius e retorne em Fahrenheit.
#include <stdio.h>

float celsiusToF(float tempC){
    float tempF;

    tempF = (tempC * 1.8) + 32;

    return tempF;
}

int main(){
    float tempC;

    printf("\n                 Conversor de temperatura (Celsius para Fahrenheit)  \n\n");
    printf("\n  Digite a temperatura (em Graus Celsius): ");
    scanf("%f", &tempC);
    printf("\n---------------------------------------------------------------------------------\n");
    printf("\n  Fórmula: F° = (C° * 9/5) + 32  |  F° = (%.1f * 1.8) + 32\n", tempC);
    printf("\n---------------------------------------------------------------------------------\n");

    float tempF = celsiusToF(tempC);

    printf("\n  %.1f C° é igual a %.1f F°\n", tempC, tempF);
    printf("\n---------------------------------------------------------------------------------\n");
    
    return 0;
}