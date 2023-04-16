/* Ler os números inteiros n, m e k e imprimir a soma e a média dos números no intervalo de n a m que são divisíveis por k. 
*/

#include <stdio.h>

int main(){
    int n, m, k, soma = 0, contador = 0, i;
    float media;
    printf("Insira n e m e k, para achar os numeros entre n e m que sao divisiveis por k:\n");
    scanf("%i%i%i", &n, &m, &k);
    for (i = n+1; i<m; i++){
        if ((i%k) == 0){
            printf("%i\n",i);
            soma += i;
            contador++;
        }
    }

    media = soma/contador;

    printf("A soma dos numeros eh %i, e a media eh %f.", soma, media);



    return 0;
}