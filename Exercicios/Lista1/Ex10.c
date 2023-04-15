/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
Fazer um programa para ler um número inteiro de 4 dígitos e verificar se ele possui essa propriedade.  
Imprima a primeira parte do número, a segunda parte e o valor da multiplicação.  
Caso o usuário digite um número que não tenha 4 dígitos, apresente uma mensagem de erro.*/

#include <stdio.h>

int main(){
    int num, dpd, dud, somaD; //dpd = dois primeiros digitos   dud = dois ultimos digitos
    scanf("%i", &num);

    if (num > 1000){
        dpd = num/100;
        dud = num%100;
        somaD = dpd + dud;
        if ((somaD * somaD) == num){
            printf("O numero possui a propriedade:\n");
            printf("Isso eh pq %i + %i = %i. E %i * %i = %i", dpd, dud, somaD, somaD, somaD, num);
        }
        else{
            printf("O numero nao possui a propriedade:\n");
            printf("Isso eh pq %i + %i = %i. E %i * %i nao eh %i", dpd, dud, somaD, somaD, somaD, num);

        }

    }
    else{
        printf("Numero Invalido");
    }
    return 0;
}