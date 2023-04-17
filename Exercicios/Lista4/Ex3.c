/*Escreva um algoritmo que gere a seguinte matriz: 
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1 
1 2 3 3 2 1 
1 2 2 2 2 1 
1 1 1 1 1 1
 */


#include <stdio.h>

int main(){

    int i, j;
    int M[6][6];

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if (i == 0 || i == 5 || j == 0 || j == 5) {
                M[i][j] = 1;
            }
            else if (i == 1 || i == 4 || j == 1 || j == 4) {
                M[i][j] = 2;
            }
            else {
                M[i][j] = 3;
            }        
        }
    }

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}