int main(){

    int num[13] = {3,6,10,11,12,15,25,26,31,32,38,39,40};

    for(int i = 0; i <= 13; i++){
        if(num[i] == 15){
            printf("%i", i);
            break;
        }
        else if(num[i] > 15){
            printf("-1");
            break;
        }

    }


    return 0;
}