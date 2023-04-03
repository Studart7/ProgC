#include <stdio.h>
#include <string.h>

//Multiplicar uma matriz por um numero inteiro

int main(){
    int i,j, cont = 1;
    int matriz[20][10];
    int valormulti, multiplicador = 2;//Define o numero inteiro que ira ser multiplicado pela matriz(pode fazer scan se quiser)

    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = cont;
            cont++;
        }
    }
    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            valormulti = matriz[i][j] * multiplicador;
            printf("%d\t", valormulti);
            
        }
        printf("\n");
    }
    
    return 0;
}