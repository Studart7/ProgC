#include <stdio.h>
#include <string.h>

//Soma dos valores na diagonal principal de uma matriz 3x3

int main(){
    int i,j, cont = 1, soma = 0;
    int matriz[20][10];

    for (i = 0; i<3; i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = cont;
            cont++;
        }
    }
    for (i = 0; i<3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
            if (i == j){
                soma = soma + matriz[i][j];
            }
            
        }
        printf("\n");
    }
    printf("%i", soma);
    return 0;
}