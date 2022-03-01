#include<stdio.h>

long factorial(int num){
    if(num==0||num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int main(){
    int num = 5;
    printf("%ld\n",factorial(num));
    return 0;
}