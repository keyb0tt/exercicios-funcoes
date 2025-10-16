// Crie uma função que receba dois inteiros e retorne o MMC (mínimo múltiplo comum).
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mdcCalc(int n1, int n2){
    int menorN = n1;

    if(n2 < n1){
        menorN = n2;
    }

    for(int i = menorN; i >= 0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }

    return 0;
}

int mmcCalc(int n1, int n2){
    int mdc = mdcCalc(n1, n2), mmc = (n1 * n2) / mdc;
    
    return mmc;
}

int main(){
    int n1, n2;

    for(int i = 1; i <= 2; i++){
        system("clear");
        printf("\n--------------------------------------------------\n");
        printf("\nMínimo Múltiplo Comum (MMC)\n");
        if(i == 1){
            printf("\nInsira o %d° número: ", i);
            scanf("%d", &n1);
            system("clear");
            continue;
        } else {
            printf("\nInsira o %d° número: ", i);
            scanf("%d", &n2);
            system("clear");

        }

        printf("\n--------------------------------------------------\n");
        printf("\nMínimo Múltiplo Comum (MMC)\n");
        printf("\nO MMC de %d e %d é igual a %d\n", n1, n2, mmcCalc(n1, n2));
        printf("\n--------------------------------------------------\n\n");
    }
    
    
    return 0;
}