#include <stdio.h>

int main(){
    int ntotal, i;
    float valor, soma = 0, media;

    printf("Digite numero total de notas dadas na prova: ");
    scanf("%i",&ntotal);
    int nvalores[ntotal];

    printf("Digite as notas: \n");
    for(i = 0; i < ntotal; i++){
        printf("nota %i: ", i+1);
        scanf("%f", &valor);
        nvalores[i] = valor;
        soma = soma + nvalores[i];
    }
    
    media =  soma / ntotal;
    printf("A media das notas eh: %f", media);
    return 0;
}