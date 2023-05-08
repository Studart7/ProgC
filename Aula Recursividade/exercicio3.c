#include <stdio.h>

int multi(int n, int y){
    if (n == 0 || y == 0){
        return 0;
    }
    else if (n == 1){
        return y;
    }
    else if(y == 1){
        return n;
    }
    else{
        return n + multi(n, y-1);
    }
}

int main(){
    printf("%i", multi(6, 3));
    return 0;
}