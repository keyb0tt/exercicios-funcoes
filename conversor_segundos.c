// Crie uma função que receba um valor em segundos e converta para horas, minutos e segundos.
#include <stdio.h>

int conversorSegundos(int segundos){
    int horas = 0, minutos = 0, i = 1;
    int result;
    
    do{
        if(segundos >= 3600){
            horas++;
            segundos -= 3600;
        } else if(segundos >= 60){
            minutos++;
            segundos -= 60;
        } else if(segundos < 60){
            i = 0;
        } 
    } while(i != 0);

    printf("\n%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return result;
}


int main(){
    int segundos, result;

    printf("\n---------------------------------------------------\n");
    printf("\nConversor de Segundos para Horas, Minutos e Segundos\n");
    printf("\n---------------------------------------------------\n");
    printf("\nInsira a quantidade de segundos: ");
    scanf("%d", &segundos);

    printf("\n---------------------------------------------------\n");
    result = conversorSegundos(segundos);
    printf("\n---------------------------------------------------\n");

    return 0;
}