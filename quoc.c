#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);
    float resto = (num1 % num2);
    float quoci = (num1 / num2);
    printf("Os numeros inseridos sao: %i, %i \n", num1, num2);
    printf("O quociente desses numeros resulta em: %f \n", quoci);
    printf("O resto desses numeros resulta em: %f", resto);
    
    return 0;
}