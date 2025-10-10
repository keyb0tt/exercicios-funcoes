// Crie uma função que receba dois números e retorne o maior deles.
#include <stdio.h>

int maiorNum(int n1, int n2){
    int maior;

    if(n1 > n2){
        maior = n1;
    } else if(n1 < n2){
        maior = n2;
    } else if(n1 == n2){
        maior = 0;
    } 

    return maior;
}

int main(){
    int n1, n2;

    printf("\n\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
    printf("                Digite 0 (zero) para encerrar\n\n");
    printf("                 Digite o primeiro número: ");
    scanf("%d", &n1);
    if(n1 != 0){
        printf("\n                 Digite o segundo número:  ");
        scanf("%d", &n2);
    } else {
        n2 = 0;
    }
    if(n1 == 0 || n2 == 0){
        printf("\n                  FIM DO PROGRAMA\n");
        printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
        return 0;
    }
    printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
    if(maiorNum(n1, n2) == 0){
        printf("               Os valores inseridos são iguais\n");
        printf("\n                      FIM DO PROGRAMA\n");
        printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");

    } else {
        printf("               O maior valor encontrado foi %d\n", maiorNum(n1, n2));
        printf("\n                      FIM DO PROGRAMA\n");
        printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
    }

    return 0;
}