#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int recursion_multiply(int a, int b){
    int res = 0;
    while(b>1){
        b-=2;
        res+=a<<1;   
    }
    return b==1 ? res+a : res;
}

int recur_multi(int A, int B){
    if(B==1)return A;
    return A+recur_multi(A,B-1);
}

int main(){
    int num1=11,num2=11;
    printf("num1 x num2 = %d\n", recur_multi(num1,num2));
}