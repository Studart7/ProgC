/*Ler dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2).  
Em seguida imprimir o intervalo entre esses dois horários em hora, 
minuto e segundo. Dica: converta os horários lidos para segundos, 
calcule a diferença e converta a diferença em hora, minuto e segundo. */

#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2, interHora, interMin, interSeg;
    long interSegTotal;
    printf("Digite o primeiro horario, em ordem Hora, Minuto, Segundo:\n");
    scanf("%i%i%i", &h1, &m1, &s1);
    printf("Digite o segundo horario, em ordem Hora, Minuto, Segundo:\n");
    scanf("%i%i%i", &h2, &m2, &s2);

    long totalSeg1 = (h1 * (60 * 60)) + (m1 * 60) + s1;
    long totalSeg2 = (h2 * (60 * 60)) + (m2 * 60) + s2;

    if (totalSeg1 > totalSeg2) {
        interSegTotal = totalSeg1 - totalSeg2;
        interHora = interSegTotal / 3600;
        interMin = (interSegTotal - (interHora * 3600)) / 60;
        interSeg = interSegTotal % 60;
    }
    else {
        interSegTotal = totalSeg2 - totalSeg1;
        interHora = interSegTotal / 3600;
        interMin = (interSegTotal - (interHora * 3600)) / 60;
        interSeg = interSegTotal % 60;
    }

    printf("Intervalo em segundos: %lds\n", interSegTotal);
    printf("Intervalo %i h %i min %i seg", interHora, interMin, interSeg);
    return 0;
}