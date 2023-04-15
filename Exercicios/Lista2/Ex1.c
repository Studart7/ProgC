//Ler os números inteiros n e m e imprimir os números ímpares no intervalo de n a m.

#include <stdio.h>

int main(){
    int n, m, i;
    scanf("%i %i", &n, &m);

    if ((n%2) != 0){
        for (i = n+2; i<m; i+=2){
            printf("%i\n", i);
        }
    }
    else{
        for (i = n+1; i<m; i+=2){
            printf("%i\n", i);
        }
    }
    return 0;
}