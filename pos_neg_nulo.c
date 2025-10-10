// Crie uma função que receba um número e retorne 1 se positivo, -1 se negativo, 0 se nulo.
#include <stdio.h>

int numStatus(int num){
    int result;

    if(num > 0){
        result = 1;
    } else if(num < 0){
        result = -1;
    } else{
        result = 0;
    }

    return result;
}

int main(){
    int num, result;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
    printf("\n                  Insira o número desejado: ");
    scanf("%d", &num);
    printf("\n-------------------------------------------------------------\n");
    printf("\n                    O número inserido foi %d\n", num);
    printf("\n-------------------------------------------------------------\n");

    result = numStatus(num);

    if(result == 1){
        printf("\n             O número foi reconhecido como positivo\n");
    } else if(result == -1){
        printf("\n             O número foi reconhecido como negativo\n");
    } else if (result == 0){
        printf("\n    Nenhum número inserido, operação reconhecida como nula\n");
    }

    printf("\n-------------------------------------------------------------\n");
    printf("\n                        FIM DO PROGRAMA\n");
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");

    return 0;
}