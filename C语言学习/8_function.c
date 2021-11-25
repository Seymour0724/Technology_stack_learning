#include<stdio.h>

int max(int a, int b)
{
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int ret;
    ret = max(num1,num2);
    printf("The max num is: %d\n", ret);
    printf("------------------------\n");
    swap(&num1,&num2);
    printf("num1: %d, num2: %d",num1,num2);
    return 0;
}