/*Ler um número inteiro n e imprimir todos os números perfeitos no intervalo de 1 a n.  
Número perfeito é o número cujo somatório de todos os seus divisores (menos ele mesmo) é igual a ele. 
Por exemplo: 6 = 1 + 2 + 3, logo 6 é um número perfeito.*/

#include <stdio.h>  

int main(){
    int n, i, j, soma = 0;
    printf("Insira um numero inteiro para achar os numeros perfeitos entre 1 e este numero:\n");
    scanf("%i", &n);
    for (i = 2; i<n ;i++){
        for (j = 1; j<i ; j++){
            if ((i % j) == 0){
                soma += j;
            }
        }
        if (soma == i){
            printf("%i eh um numero perfeito.\n", i);
        }
        soma = 0;
    }



    return 0;
}