//Ler 3 valores inteiros do usuário e mostrar o maior deles, o menor deles e a média

#include <stdio.h>

int main(){
    int x,y,z,maior, menor;
    printf("Insira 3 valores inteiros:\n");
    scanf("%i%i%i", &x, &y, &z);
    
    double media = (x+y+z)/3.0; 
    menor = x;
    maior = x;

    if (y < menor){
        menor = y;
    }
    if (z < menor){
        menor = z;
    }
    if (y > maior){
        maior = y;  
    }
    if (z > maior){
        maior = z;
    }
    

    printf("Media:\n %lf\n", media);
    printf("Maior:\n %i\n", maior);
    printf("Menor:\n %i\n", menor);
    return 0;
}