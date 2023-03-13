#include <stdio.h>

int main(){
    int i, indice = 0;
    float notas[10];
    float valor, soma = 0, media;

    while (1){
        scanf("%f", valor);
        if(valor == -1){
            break;
        }
        if(indice > 9){
            break;
        }
        else {
            notas[indice] = valor;
            indice++;   
        }
    }
    for(i=indice; i >=0 ; i--){
        printf("%f ", notas[i]);
        soma = soma + notas[i];
    }
    media = soma / (indice+1);
    return 0;
}