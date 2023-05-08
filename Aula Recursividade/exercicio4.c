int produto(int m, int n){ //m tem que ser menor que n
    if (m == n){
        return m * n;
    }
    else if (m == 0 || n == 0){
        return 0;
    }
    else{
        return produto(m,n) + produto (m+1,n-1);
    }
}