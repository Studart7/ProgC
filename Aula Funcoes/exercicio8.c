/*Escreva um programa que leia dois valores inteiros (A e B). Em seguida faça uma
função que retorne a soma do dobro dos dois números lidos. A função deverá
armazenar o dobro de A na própria variável A e o dobro de B na própria variável
B.*/

int somaDobro(int A, int B){
    A *= 2;
    B *= 2;
    return A + B;
}

int main(){
    int A, B;
    scanf("%i%i", &A, &B);
    int somarDobro = somaDobro(A, B);
    printf("%i", somarDobro);
}