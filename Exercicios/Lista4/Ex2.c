/*2.	Escrever um algoritmo que lê uma matriz M(10,10) e a escreve. Troque, a seguir: 
a) a linha 2 com a linha 8
b) a coluna 4 com a coluna 10 
c) a diagonal principal com a diagonal secundária 
d) a linha 5 com a coluna 10. 
Escreva a matriz assim modificada
*/

#include <stdio.h>

int main(){
    int M[10][10];
    int i, j, contador = 1, temp;

    // Preenche a matriz com valores crescentes
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            M[i][j] = contador;
            contador++;
        }
    }

    // Troca a linha 2 com a linha 8
    for(j = 0; j < 10; j++){
        temp = M[1][j];
        M[1][j] = M[7][j];
        M[7][j] = temp;
    }

    // Troca a coluna 4 com a coluna 10
    for(i = 0; i < 10; i++){
        temp = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = temp;
    }

    // Troca a diagonal principal com a diagonal secundária
    for(i = 0; i < 10; i++){
        temp = M[i][i];
        M[i][i] = M[i][9-i];
        M[i][9-i] = temp;
    }

    // Troca a linha 5 com a coluna 10
    for(i = 0; i < 10; i++){
        temp = M[4][i];
        M[4][i] = M[i][9];
        M[i][9] = temp;
    }

    // Imprime a matriz modificada
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}