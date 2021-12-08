#include<stdio.h>
#include<math.h>

int divide(int dividend, int divisor){
    int low = pow(-2,31);
    int up = pow(2,31)-1;
    if((dividend<low||dividend>up)||(divisor<low||divisor>up)){
        return up;
    }
    if(dividend<divisor) return 0;
    int res=1;
    while(divisor<dividend){
        res++;
        divisor = divisor<<1;
        //printf("%d\n",divisor);
    }
    return divisor==dividend? res+1:res;
}

int main(){
    int a=12, b=3;
    printf("%d\n",divide(a,b));
    return 0; 
}