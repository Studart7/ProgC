/*Crie a função media() que recebe um vetor de float e o tamanho do vetor e retorna a média dos valores.
Em seguida, use a função ler_reais() para ler os valores do vetor e use a função media() para imprimir a
média.
*/

#include <stdio.h>

float* ler_reais(){
    int i = 0;
    static float array[100];
    float reais;
    scanf("%f", &reais);
    while (reais != -1.0 && i < 100){
        array[i] = reais;
        i++;
        scanf("%f", &reais);
    }
    
    return array;
}

float media(float vetor[], int tamanho){
    int i = 0;
    float soma = 0, media;
    for (i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    media = soma / sizeof(vetor);
    return media;
}

int main(){
    float* vetor = ler_reais();
    float resposta = media(vetor, 100); 
    printf("A media eh %f\n", resposta);
    return 0;
}
