/*Ler os números inteiros n, m e k e imprimir os números no intervalo de n a m que são divisíveis por k.  */

#include <stdio.h>

int main(){
    int n, m, k, i;
    printf("Insira n e m e k, para achar os numeros entre n e m que são divisiveis por k:\n");
    scanf("%i%i%i", &n, &m, &k);

    for (i = n+1; i<m ; i++){
        if ((i%k) == 0){
            printf("%i\n",i);
        }
    }


    return 0;
}