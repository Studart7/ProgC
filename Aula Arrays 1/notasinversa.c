#include <stdio.h>

int main(){
    int i, j;
    float notas[10];
    float valor;

    
    for(i=0; i<10 ; i++){
        scanf("%f", &valor);
        notas[i] = valor; 
    }

    for(j=9; j >=0 ; j--){
        printf("%f ", notas[j]);
        
    }



    return 0;
}