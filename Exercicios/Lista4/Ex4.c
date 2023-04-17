/*Escreva um algoritmo usando matriz que, dadas as posições num tabuleiro de xadrez para duas peças 
(um rei e uma torre), imprima uma mensagem avisando se o rei encontra-se em cheque.
*/

#include <stdio.h>

int main(){
    int Tab[8][8];
    int i, j;
    int torre, rei, reii, reij, torrei, torrej;
    /*
    Diga a posiçao i e j da torre
    Input:
    Diga a posiçãoo i e j do rei
    Input:
    */
    printf("Da a posicao da torre\n");
    scanf("%i%i", &torrei, &torrej);
    printf("Da a posicao da rei\n");
    scanf("%i%i", &reii, &reij);

    if ((torrei == reii) || (torrej == reij)){
        printf("Check");
    }
    else{
        printf("Xeca. Como vc ta jogando soh com uma torre e sem o seu rei? Burro");
    }


/*

1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1
1 1 T 1 1 1 1 1
1 1 1 R 1 1 1 1
1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1

*/


    return 0;
}
