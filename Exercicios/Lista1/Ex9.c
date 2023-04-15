/*Ler um número inteiro de 100 a 999 e imprimir a soma dos dígitos que compõem o número.  
Se o número não estiver nesse intervalo emitir uma mensagem de erro. */

#include <stdio.h>

int main(){
    int num, soma, d1,d2,d3;
    printf("Insira um numero de 100 a 999:\n");
    scanf("%i", &num);

    if (num>100 && num<999){
        d1 = num/100;
        d2 = (num/10) % 10;
        d3 = num%10;
        soma = d1 + d2 + d3;
        printf("A soma dos digitos eh: %i", soma);
    }
    else{
        printf("Numero invalido");
    }
    
    return 0;
}