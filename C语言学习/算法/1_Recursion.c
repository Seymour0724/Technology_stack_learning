#include<stdio.h>

//��׳�
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
    printf("�׳˽��Ϊ��%d\n", factorial(num));
    printf("쳲��������н��Ϊ��%d\n",fibo(num));
    return 0;
}
