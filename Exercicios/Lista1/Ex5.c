/*Ler uma temperatura e a escala (C-Celsius ou F- Fahrenheit ) e convertê-la para a outra escala.  
Ou seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e vice-versa. */

#include <stdio.h>

int main(){
    double x, C, F;
    char y;
    printf("Insira uma temperatura seguido de sua escala (C ou F):\n");
    scanf("%lf %c", &x, &y);
    

    if (y == 'C'){
        C = x;
        F = 32 + (1.8 * C);
        printf("%fC em Fahrenheit eh: %fF", C, F);
    }
    else{
        F = x;
        C = (F - 32.0) * (100/180.0);
        printf("%fF em Fahrenheit eh: %fC", F, C);
    }

    return 0;
}