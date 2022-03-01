// 实现一个求前n!和的程序

#include<stdio.h>

long factorial(long num){
    long res = 1;
    while(num>=1){
        res = res*num;
        num -= 1;
    }
    return res;
}

long SUM(long num){
    long result = 0;
    while(num>=1){
        result+=factorial(num);
        num -=1;
    }
    return result;
}

int main(){
    long num = 10;
    printf("result:%ld\n", SUM(num));
    return 0;
}