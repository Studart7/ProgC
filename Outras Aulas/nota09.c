#include <stdio.h>

int main() {
    int nota;
    scanf("%i", &nota);
    if (nota >= 86 && nota <= 100){
        printf("A");
    }
    else if (nota >= 61 && nota <= 85){
        printf("B");
    }
    else if (nota >= 36 && nota <= 60){
        printf("C");
    }
    else if (nota >= 1 && nota <= 35){
        printf("D");
    }
    else if (nota < 1){
        printf("E");
    }
  
    return 0;
}