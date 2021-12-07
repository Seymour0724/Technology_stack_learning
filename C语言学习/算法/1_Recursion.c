#include<stdio.h>

//求阶乘
int factorial(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return num*factorial(num-1);
    }
}

int fibo(int num){
    if(num==2 || num==1){
        return 1;
    }
    return fibo(num-1)+fibo(num-2);
}

int main(){
    int num = 7;
    printf("阶乘结果为：%d\n", factorial(num));
    printf("斐波那契数列结果为：%d\n",fibo(num));
    return 0;
}
