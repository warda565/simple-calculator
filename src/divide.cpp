include "../include/calculator.h"

float Divide(int a, int b){
    if (a==0){
        cout<<"Zero Divisor Error";
        return 0;
    }
    else{
        return a/b;
    }
}