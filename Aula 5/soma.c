#include <stdio.h>

int main(){
    int N, X, i, soma;
    soma = 0;
    printf("Quantos numeros\n");
    scanf("%i", &N);
    printf("Quais sao\n");
    for (i = 1 ; i <= N ; i++){
        scanf("%i", &X);
        soma = soma + X;
    }
    printf("%i", soma);
    return 0;
}

