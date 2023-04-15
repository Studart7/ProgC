#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    printf("Digite um numero: ");
    scanf("%f", &num3);
    float med = (num1 + num2 + num3)/3;
    printf("Os numeros inseridos sao: %f, %f, %f, e ", num1, num2, num3);
    printf("a media desses numeros resulta em: %f", med);
    
    //Se remover parenteses não é o mesmo
    /*Para codigo com 2 numeros em vez de 3 retiramos o num3 e trocamos a divisao da media de 3 para 2 */

    return 0;
}