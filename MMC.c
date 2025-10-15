// Crie uma função que receba dois inteiros e retorne o MMC (mínimo múltiplo comum).
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mmcCalc(int n1, int n2){
    int mmc = 0, div = 2, arraySize = 0;
    int fatoresPrimos[arraySize];

    while(true){
        if(n1 % div == 0){
            n1 /= div;
            fatoresPrimos[arraySize] = div;
        }
        if(n2 % div == 0){
            n2 /= div;
            fatoresPrimos[arraySize] = div;
        }

        arraySize++;
        div++;
    }

    for(int i = 0; i <= 2; i++){
        printf(" %d ", fatoresPrimos[i]);
    }

    return 0;
}

int main(){
    int n1, n2;

    system("clear");
    printf("\nMínimo Múltiplo Comum (MMC)\n\n");
    
    printf("Insira o 1° número: ");
    scanf("%d", &n1);
    printf("\n");
    printf("Insira o 2° número: ");
    scanf("%d", &n2);

    printf("\nMMC = %d\n\n", mmcCalc(n1, n2));

    return 0;
}