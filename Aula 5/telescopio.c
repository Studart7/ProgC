#include <stdio.h>

int main(){
    int A, N, F, contador, resultado;
 	contador = 0;
    scanf("%i", &A);
    scanf("%i", &N);
    for (int i = 0 ; i < N ; i++){
        scanf("%i", &F);
        resultado = F * A;
        if (resultado >= 40000000){
            contador++;
        }
    }
    printf("%i", contador);


    return 0;
}