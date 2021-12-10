#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

int divide(int dividend, int divisor){
    int low = pow(-2,31);
    int up = pow(2,31)-1;
    int flag = 0;
    if((dividend<low||dividend>up)||(divisor<low||divisor>up)){
        return up;
    }
    if((dividend>0&&divisor>0)||(dividend<0&&divisor<0)){
        flag = 1;
    }
    dividend = abs(dividend);
    divisor = abs(divisor);
    if(dividend<divisor) return 0;
    int res=1,temp=divisor;
    while(temp<dividend){
        temp+=divisor;
        if(temp<=dividend){
            res++;
        }
        //printf("%d\n",divisor);
    }
    // int result = divisor==dividend? res+1:res;
    return flag ? res : 0-res;
}

int divide2(int dividend, int divisor){
    if(dividend == 0)
        return 0;
    if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    if(dividend == INT_MIN && divisor == 1)
        return INT_MIN;
    if(dividend == INT_MIN && divisor == INT_MAX)
        return -1;
    if(dividend == divisor)
        return 1;
    if(divisor == INT_MIN)
        return 0;
    int sum1 = 0,t1 = 0;
    int sum2 = 0,t2 = 0;
    int sum3 = 0,t3 = 0;
    int res = 0;
    bool flag = (dividend ^ divisor) < 0;
    int result = 0;
    if(dividend == INT_MIN){
        dividend += abs(divisor);
        result++;
    }
    int t = abs(dividend);
    int d = abs(divisor);
    for(int i = 31;i >= 0;i--){
        if((t >> i) >= d){
            result += 1 << i;
            t -= d << i;
        }
    }
    if(result == INT_MIN)
        return INT_MAX;
    else
        return flag ? -result : result;
    return 0;
}


int main(){
    int a=121, b=61;
    printf("%d\n",divide2(a,b));
    return 0; 
}