/*Ler números inteiros até que o usuário digite zero ou um número negativo.  
Ao final imprimir a soma e a média aritmética dos números digitados, o menor e o maior número.  */

#include <stdio.h>

int main(){
    int num, soma = 0, contador= 0;
    float media;
    printf("Insira numeros para soma-los, e digite 0 ou menor para parar de contar.\n");
    scanf("%i", &num);
    while(num >= 1){
        soma += num;
        contador++;
        scanf("%i", &num);
    }

    media = soma/contador;
    printf("A soma dos numeros eh %i, e a media eh %f", soma, media);


    return 0;
}