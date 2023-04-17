/*Ler um vetor de inteiros positivos v (máximo de 20 números) e imprimir a média e os números acima da média. */

#include <stdio.h>

int main(){
    int i, n, vetor[20], nums, soma = 0, contador = 0;
    float media;

    printf("Insira quantos numeros irá digitar");
    scanf("%i",  &n);
    printf("Digite os numeros");
    for (i=0; i < n; i++){
        scanf("%i", &nums);
        vetor[i] = nums;
        soma += nums;
        contador ++;
    }

    media = soma / contador;
    printf("%f\n", media);

    for (i = 0; i < n ;i++){
        if (vetor[i] > media){
            printf("%i, ", vetor[i]);

        }
    }




    return 0;
}
