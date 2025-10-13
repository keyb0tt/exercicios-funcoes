// Crie uma função que receba uma letra e retorne 1 se for vogal ou 0 se for consoante.
#include <stdio.h>

int vogalOuConsoante(char letra){
    int tipoLetra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
       letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        tipoLetra = 1;
    } else{
        tipoLetra = 0;
    }

    return tipoLetra;
}

int main(){
    char letra;
    int tipoLetra;

    printf("\n---------------------------------------------------\n");
    printf("\nVerificador de vogal || consoante\n");
    printf("\n---------------------------------------------------\n");
    printf("\nInsira a letra a ser verificada: ");
    scanf("%c", &letra);

    tipoLetra = vogalOuConsoante(letra);

    printf("\n---------------------------------------------------\n");
    if(tipoLetra == 1){
        printf("\nA letra é uma vogal\n");
    } else if(tipoLetra == 0){
        printf("\nA letra é uma consoante\n");
    }
    printf("\n---------------------------------------------------\n");
    
    return 0;
}