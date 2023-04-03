#include <stdio.h>
#include <string.h>

int main(){
    int i,j, cont = 1, soma = 0;
    int matriz[20][10];

    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = cont;
            cont++;
        }
    }
    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
            soma = soma + matriz[i][j]; // Cria a soma dos valores
        }
        printf("\n");
    }
    printf("%i", soma); //Imprime
    return 0;
}