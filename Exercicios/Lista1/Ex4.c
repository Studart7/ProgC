/* Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit, segundo a fórmula: 
  
*/

#include <stdio.h>

int main(){
    double C, F;
    printf("Insira uma temperatura em Celsius para converter para Fahrenheit:");
    scanf("%lf", &C);

    F = 32 + (1.8 * C);

    printf("%fC em Fahrenheit eh %fF", C, F);


    return 0;
}