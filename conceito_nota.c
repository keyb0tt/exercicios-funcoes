#include <stdio.h>
#include <stdlib.h>

void header(){
    system("clear");
    printf("\n                 Conceito de nota\n");
    printf("\n--------------------------------------------------\n");
}

void footer(){
    printf("\n--------------------------------------------------\n\n");
}

char conceitoNota(int nota){
    char conceito;

    if(nota > 10){
        printf("\n ~> A nota inserida é maior do que 10\n");
        footer();
        return 0;
    }

    if(nota == 10){
        conceito = 'A';
    } else if(nota >= 8){
        conceito = 'B';
    } else if(nota >= 6){
        conceito = 'C';
    } else if(nota >= 4){
        conceito = 'D';
    } else if(nota >= 2){
        conceito = 'E';
    }

    return conceito;
}


int main(){
    int nota;
    
    header();
    printf("\n ~> Insira a nota desejada: ");
    scanf("%d", &nota);
    header();

    if(conceitoNota(nota) != 0){
        printf("\n ~> A Nota %d corresponde ao conceito %c\n", nota, conceitoNota(nota));
        footer();
    }

    return 0;
}