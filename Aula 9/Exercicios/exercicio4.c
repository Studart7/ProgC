#include <stdio.h>
#include <string.h>

//Achar o maior numero em uma matriz e fazer o produto dessa matriz com esse numero

int main(){
    int i,j, cont = 1, maiornum = 0;
    int matriz[20][10];
    int valormulti;

    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = cont;
            cont++;
            
        }
    }
    
    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            if (matriz[i][j] > maiornum){
                maiornum = matriz[i][j];
            }
        }
    }

    for (i = 0; i<4; i++){
        for (j = 0; j < 3; j++){
            valormulti = matriz[i][j] * maiornum;
            printf("%d\t", valormulti);
        }
        printf("\n");
    }

    
    return 0;
}