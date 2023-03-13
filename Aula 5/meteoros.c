#include <stdio.h>

int main(){
    int X,Y,X1,X2,Y1,Y2,N, i, contador = 0, teste = 1;
    while (1){
    printf("Digite as coordenadas da fazenda\n");
    scanf("%i%i%i%i", &X1,&Y1,&X2,&Y2);
    if (X1 == 0 & X2 == 0 & Y1 == 0 & Y2 == 0){
        break;
    }
    printf("Digite numero de meteoros\n");
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        printf("\nMeteoro %i\n", i);
        scanf("%i%i", &X, &Y);
        if (X > X1 & X <X2 & Y > Y2 & Y < Y1){
            contador++;
        }
    }
    printf("Teste %i \n", teste);
    printf("O numero de meteoros que cairam na fazenda eh %i\n", contador);
    teste++;
    }
 	
    return 0;
}