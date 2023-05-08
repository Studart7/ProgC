/*Escreva um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o
menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.
*/
int maiorValor(int x, int y){
    int aux;
    if (y > x){
        aux = y;
        y = x;
        x = aux;
    }

}

int main(){
    int x = 4, y = 7;
    maiorValor(x,y);
    printf("%i e %i", x, y);

    return 0;
}