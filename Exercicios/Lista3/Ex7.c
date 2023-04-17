/*Ler um vetor de inteiros positivos a (máximo de 20 números). 
Esse vetor deverá ter números inteiros ordenados e valores repetidos. 
Gere um outro vetor b a partir de a contendo somente os valores não repetidos e imprima b. 
Exemplo: a = 2, 3, 3, 4, 5, 5, 5, 8, 10, 10, 10,12, 14, 14 b = 2, 3, 4, 5, 8, 10, 12, 14 */

#include <stdio.h>

int main(){
    int i, j = 0, a[20], b[20], n,  nums;

    printf("Diga quantos numeros quer digitar:\n");
    scanf("%i", &n);
    printf("Insira os numeros, ordenados e com valores repitidos\n");
    for (i = 0; i < n ; i++){
        scanf("%i", &nums);
        a[i] = nums;
    }
    b[0] = a[0];
    for (i = 1; i < n; i++){
        if (a[i] != a[i-1]){
            j++;
            b[j] = a[i];
        }
    }

    for (i = 0; i<= j; i++){
        printf("%i ", b[i]);
    }
    
    return 0;
}