#include <stdio.h>

//n + termial(n-1)

int termial(int n){
    if (n <= 1){
        return 1;
    }
    else{
        return n + termial(n-1);
    }
}

int main(){
    printf("%i", termial(3));
    return 0;
}