/*Ler o número de horas trabalhadas e o valor da hora do professor e imprimir o salário bruto e líquido, 
sabendo que o desconto do IR segue a fórmula: 
Salário menor ou igual a R$ 1200,00 – desconto ZERO 
Salário maior que R$1200,00 e menor ou igual a R$ 1800,00 – desconto de 10% 
Salário maior que R$1800,00 e menor ou igual a R$ 2200,00 – desconto de 15% 
Salário maior que R$2200,00 – desconto de 27,5%
*/
#include <stdio.h>

int main(){
    int horasTrab;
    double salarioBrt, salarioLiq, valorHoras;

    printf("Insira o numero de horas trabalhadas e o valor da hora:\n");
    scanf("%i %lf", &horasTrab, &valorHoras);

    salarioBrt = horasTrab * valorHoras;
    if (salarioBrt <= 1200){
        salarioLiq = salarioBrt;
    }
    else if (salarioBrt > 1200 && salarioBrt <= 1800){
        salarioLiq = salarioBrt * 0.9;
    }
    else if (salarioBrt > 1800 && salarioBrt <= 2200){
        salarioLiq = salarioBrt * 0.85;
    }
    else {
        salarioLiq = salarioBrt * 0.725;
    }

    printf("Salario bruto: %f \nSalario liquido: %f", salarioBrt, salarioLiq);


    return 0;
}