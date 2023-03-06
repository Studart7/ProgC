#include <stdio.h>

int main(){
    int c1, c2, c3, c4, c5;
    scanf("%i%i%i%i%i", &c1, &c2, &c3, &c4, &c5);
    if (c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5){
        printf("C");
    } 
    else if (c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5){
        printf("D");
    }
    else{
        printf("N");
    };
    return 0;
}