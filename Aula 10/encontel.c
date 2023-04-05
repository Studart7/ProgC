#include <stdio.h>

int main(){

    char frase[30], c, i, final[30];

    scanf("%s", &frase);

    for (i=0;i<frase[30]; i++){
        if (frase[i] == "-"){
            final[i] = "-";
        }
        else if (frase[i] == "1"){
            final[i] = "1";
        }
        else if (frase[i] == "0"){
            final[i] = "0";
        }
        else if (frase[i] == "A" || frase[i] == "B" || frase[i] == "C" ){
            final[i] = "2";
        }
        else if (frase[i] == "D" || frase[i] == "E" || frase[i] == "F" ){
            final[i] = "3";
        }
        else if (frase[i] == "G" || frase[i] == "H" || frase[i] == "I" ){
            final[i] = "4";
        }
        else if (frase[i] == "J" || frase[i] == "K" || frase[i] == "L" ){
            final[i] = "5";
        }
        else if (frase[i] == "M" || frase[i] == "N" || frase[i] == "O" ){
            final[i] = "6";
        }
        else if (frase[i] == "P" || frase[i] == "Q" || frase[i] == "R"|| frase[i] == "S" ){
            final[i] = "7";
        }
        else if (frase[i] == "T" || frase[i] == "U" || frase[i] == "V" ){
            final[i] = "8";
        }
        else if (frase[i] == "W" || frase[i] == "X" || frase[i] == "Y" || frase[i] == "Z" ){
            final[i] = "9";
        }
        else{
            final[i] = "";
        }
        
    }

    printf("%s", final);


    return 0;
}