/*8.	Ler os valores inteiros x, y e z e determinar se estes valores podem formar os lados de um triângulo. 
Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno. 
Definições: 
•	Triângulo: a soma de dois lados quaisquer tem que ser maior que o terceiro lado
•	Triângulo equilátero: possui os 3 lados iguais. 
•	Triângulo isósceles: possui 2 lados iguais e o terceiro diferente • 	
    Triângulo escaleno: possui os 3 lados diferentes.
*/

#include <stdio.h>

int main(){
    int x, y, z;
    printf("Insira tres lados:\n");
    scanf("%i %i %i", &x, &y, &z);
    if ((x+y)>z || (y+z)>z || (x+z)> y ){
        printf("Eh um triangulo do tipo ");
        if (x == y && y == z){
            printf("Equilatero");
        }
        else if ((x == y && y != z) || (y == z && z != x) || (z == x && x != y)){
            printf("Isosceles");
        }
        else if (x != y && y != z && z != x){
            printf("Escaleno");
        }
    }
    else{
        printf("Nao eh um triangulo");
    }




    return 0;
}