/*Crie as funções ler_inteiros() e ler_reais() para ler valores inteiros/reais e armazená-los em um vetor até
que o usuário digite -1. As funções devem retornar a quantidade de números lidos.*/
#include <stdio.h>

int ler_inteiros(){
    int i = 0, array[100], nums;
    scanf("%i", &nums);
    while (nums != -1){
        array[i] = nums;
        i++;
        scanf("%i", &nums);
    }
    
    return i;
}

int ler_reais(){
    int i = 0;
    float array[100], reais;
    scanf("%f", &reais);
    while (reais != -1.0 && i < 100){
        array[i] = reais;
        i++;
        scanf("%f", &reais);
    }
    
    return i;
}

int main(){
    int inteiros = ler_inteiros();
    printf("Tem %i numeros inteiros.\n", inteiros);
    
    int reais = ler_reais();
    printf("Tem %i numeros reais.\n", reais);
    
    return 0;
}

