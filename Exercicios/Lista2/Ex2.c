/*Altere o exercício 1 para que, se n for maior que m, os valores do intervalo sejam invertidos, 
ou seja, imprimir os ímpares no intervalo de m a n. */

#include <stdio.h>

int main(){
    int n, m, i;
    scanf("%i %i", &n, &m);
    if(n > m){
        if ((m%2) != 0){
            for (i = m+2; i<n; i+=2){
                printf("%i\n", i);
            }
        }
        else{
            for (i = m+1; i<n; i+=2){
                printf("%i\n", i);
            }
        }
    }
    else{
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
    }
    return 0;
}