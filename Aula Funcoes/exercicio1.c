/*Crie a função area() que recebe o raio de uma circunferência e calcula sua área (π r²). Em seguida, leia
números inteiros que representam os raios de uma circunferência e calcule a sua área até o usuário
digitar -1.
*/
#include <stdio.h>
#define pi 3.1415

float area(float raio){
    float area = raio * raio * pi;
    return area;
}


int main(){
    float raio;
    scanf("%f", &raio);
    printf("%f\n", area(raio));
    scanf("%f", &raio);
    while (raio != -1){
        printf("%f\n", area(raio));
        scanf("%f", &raio);
    }
    return 0;
}