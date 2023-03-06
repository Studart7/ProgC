#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);

    int resto = (num1 % num2);
    int quoci = (num1 / num2);

    printf("Os numeros inseridos sao: %d, %d \n", num1, num2);
    printf("O quociente desses numeros resulta em: %d \n", quoci);
    printf("O resto desses numeros resulta em: %d", resto);
    
    return 0;
}