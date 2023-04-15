/*Ler o número de horas trabalhadas e o valor da hora e calcular o salário semanal de um trabalhador. 
Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e até 50h há um bônus de 20% para as horas que ultrapassarem 40h. 
Acima de 50h há um bônus de 100% para as horas que ultrapassarem 50h. */

#include <stdio.h>

int main(){
    int horasTrab;
    double valorHoras, salario, salarioFinal, bonus;

    printf("Insira o numero de horas trabalhadas em uma semana e o valor da hora:\n");
    scanf("%i %lf", &horasTrab, &valorHoras);
    salario = horasTrab * valorHoras;

    if (horasTrab <= 40 ){
        salarioFinal = salario;
    }
    else if (horasTrab > 40 && horasTrab <=50){
        bonus = ((horasTrab - 40) * valorHoras) * 0.2 ;
        salarioFinal = salario + bonus;
    }
    else{
        bonus = (horasTrab-50) * valorHoras;
        salarioFinal = salario + bonus;
    }

    printf("O salario inicial eh %f, e o final eh %f", salario, salarioFinal);

    return 0;
}



