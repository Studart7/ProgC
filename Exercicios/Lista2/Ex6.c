/*Ler um inteiro n e imprimir seus divisores. */

#include <stdio.h>

int main(){
    int num, i;
    printf("Insira um numero para achar seus divisores:\n");
    scanf("%i", &num);
    for (i = 1; i<num ; i++){
        if ((num % i) == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}