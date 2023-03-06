#include <stdio.h>

int main(){
    int quant, i;
    printf("Quantas vezes deseja repetir?\n");
    scanf("%i", &quant);
    for(i = 0; i<quant; i++){
        printf("Estrutura de Dados eh sua disciplina\n");
    }
    return 0;
}