#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// void twoD_array(int b[][]);

void oneD_array(int a[], int length)
{
    for(int i=0; i<length; i++)
    {
        printf("arr[%d] = %d\n", i, a[i]);
    }
}

int *getRandom()
{
    static int r[10];
    int i;
    /*设置种子*/
    srand((unsigned)time(NULL));
    for(i=0; i<10; i++)
    {
        r[i] = rand();
        printf("r[%d] = %d\n",i, r[i]%30);
    }
    return r;
}

int main()
{
    int a[8]= {1,2,3,4,5,6,7,8};
    int length;
    length = sizeof(a)/sizeof(a[0]);
    oneD_array(a,length);
    printf("----------------\n");
    int *p;
    p = getRandom();
    for(int i=0; i<10; i++)
    {
        printf("*(p+%d) = %d\n", i, *(p+i)%30);
    }
    return 0;
}