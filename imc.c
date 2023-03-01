#include <stdio.h>

int main() {
    float altura, massa, imc;
    printf("Insira uma altura e massa de uma pessoa apos o beep.\n\a");
    printf("Altura (em m): ");
    scanf("%f", &altura);
    printf("Massa (em kg): ");
    scanf("%f", &massa);
    imc = massa/(altura*altura);
    printf("O IMC da pessoa eh: %f", imc);

    return 0;
}