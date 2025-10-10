// Crie uma função que receba dois números inteiros e retorne a soma deles.
#include <stdio.h>

int sum(int n1, int n2){
  int result;

  result = n1 + n2;

  return result;
}

int main(){
  int n1, n2;

  printf("~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
  printf("          Digite o primeiro número a ser somado: ");
  scanf("%d", &n1);
  printf("\n          Digite o segundo número a ser somado:  ");
  scanf("%d", &n2);
  printf("\n~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");
  printf("\n             A soma dos números resulta em: %d\n\n", sum(n1, n2));
  printf("~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~\n");

  printf("Fim do programa");
  return 0;
}