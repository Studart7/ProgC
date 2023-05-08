#include <stdio.h>
#include <string.h>

int variavel_global = 0;

//PASSAGEM DE PARAMETROS POR REFERENCIA
int troca(int *x, int *y){

    int aux;
    aux = *x;
    *x = *y;
    *y = aux;

}

int  main(){

    int a = 1, b=2;
    printf("valor de %d e valor de b %d\n\n", a,b);
    troca(&a,&b);
    printf("novo valor de %d e valor de b %d\n\n", a,b);

    return 0;
}
// * faz a variavel ser um ponteiro a uma outra variavel, & aponta a variavel
//e por consequencia o endereço de memoria da variavel que deseja que seja apontada