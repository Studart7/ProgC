#include <stdio.h>
#include <string.h>

//Pega duas matrizes 4x4 e faz a soma delas em uma terceira matriz

int main(){
    int i,j, cont = 1,cont2 = 1, cont3 = 1, soma = 0;
    int matriz[20][10];
    int matriz2[20][10];
    int matriz3[20][10];

    for (i = 0; i<4; i++){
        for (j = 0; j < 4; j++){
            matriz[i][j] = cont;
            cont++;
        }
    }

    for (i = 0; i<4; i++){
        for (j = 0; j < 4; j++){
            matriz2[i][j] = cont2;
            cont2++;
        }
    }
    
     
    for (i = 0; i<4; i++){
        for (j = 0; j < 4; j++){
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }


    return 0;
}