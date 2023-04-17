/*1.	Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas: 
a) da linha 4 de M 
b) da coluna 2 de M 
c) da diagonal principal 
d) da diagonal secundária 
e) de todos os elementos da matriz M
*/

#include <stdio.h>

int main(){
    int M[5][5], soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0;
    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            M[i][j] = 1;
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (j == 2){
                soma2 += M[i][j];
            }
            if (i == 4){
                soma1 += M[i][j];
            }
            if (i == j){
                soma3 += M[i][j];
            }
            soma5 += M[i][j];
        } 
    }

    for (i = 0; i < 5; i++) {
        soma4 += M[i][4-i];
    }   

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("%i eh a soma da linha 4, e %i eh a soma da coluna 2, e %i eh a soma da diagonal principal, e %i eh a soma da diagonal secundaria. ", soma1, soma2, soma3, soma4);
    printf("\nE %i eh o valor da soma da matriz toda.", soma5);
    return 0;
}