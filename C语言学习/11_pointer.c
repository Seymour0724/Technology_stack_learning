#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>

#define LEN 5

const int MAX = 5;
int a = 3;

void def_pointer()
{
    int var_runoob = 10;
    int *p;
    p = &var_runoob;
    printf("var_runoob 这个变量的地址: %p\n", p);
}

void pick_pointer()
{
    int var = 20;
    int *ip = &var; /*在指针变量中存储var的地址*/
    printf("var变量的地址：%p\n", &var);
    /*存储在ip里面的值*/
    printf("ip 中存储的值：%p\n", ip);
    /*使用指针访问值*/
    printf("*ip变量的值是：%d\n", *ip);
}

void NULL_pointer()
{
    int *p = NULL;
    printf("指针p的地址是 %p\n", p);
    if (p)
    {
        printf("is not null!\n");
    }
    else
    {
        printf("is null\n");
    }
}

//指针的算数运算--递增一个指针
void pointer_arithmetic()
{
    int li[] = {1,2,3,4,5};
    int i, *ptr;
    /*指针中的数组地址--数组名就是数组中第一个值的地址*/
    ptr = li;
    for(int i=0; i<MAX; i++)
    {
        printf("li[%d]的值为：%d\n",i, *ptr);
        printf("li[%d]的地址：%p\n",i, ptr);
        //指向下一个位置
        ptr++;
    }
    int *pre = &li[MAX-1];
    for(int j=MAX-1; j>=0; j--)
    {
        printf("li[%d]的值为：%d\n",j, *pre);
        printf("li[%d]的地址：%p\n",j, pre);
        /*指向前一个位置*/
        pre--;
    }
    int *compare = li;
    int k = 0;
    while(compare <= &li[MAX]-1)
    {
        printf("li[%d]的值为：%d\n",k, *compare);
        printf("li[%d]的地址：%p\n",k, compare);
        /*指针访问*/
        compare++;
        k++;
    }
}

//指针数组的练习
void pointer_arr()
{
    int arr[] = {1,2,3,4,5};
    //int *p[sizeof(arr)/sizeof(arr[0])];
    int *p[LEN];
    for(int i=0; i<MAX; i++)
    {
        p[i] = &arr[i];
    }
    for(int j=0; j<MAX; j++)
    {
        printf("p[%d]的值为：%p\n", j, p[j]);
        printf("p[%d]指向的值为：%d\n", j, *p[j]);
    }
}

//指向指针的指针
void ptrToptr()
{
    int value = 10;
    int *p1 = &value;
    int **p2 = &p1;
    printf("value的值为：%d\n", value);
    printf("p1的值为：%p、p2指向的值为：%p\n", p1, *p2);
    printf("p1指向的值为：%d\n",*p1);
}

//指针做参数进行传递
void getSeconds(long *ptr)
{
    *ptr = time(NULL);
    return;
}

//将数组指针传入函数当作参数
float getAverage(int *arr, int size)
{
    int sum=0;
    float avg;
    for(int i=0; i<size; i++)
    {
        sum += *arr;
        printf("%d\n",sum);
        arr++;
    }
    avg = sum/size;
    return avg;
}

//指针作为返回
int *getRandom(int *arr, int size)
{
    srand((unsigned)time(NULL));
    for(int i=0; i<size; i++)
    {
        *arr = rand()%50;
        arr++;
    }
    return arr;
}


int main()
{
    // def_pointer();
    // pick_pointer();
    // NULL_pointer();
    // pointer_arithmetic();
    // pointer_arr();
    // ptrToptr();
    long sec;
    long *p = &sec;
    getSeconds(p);
    printf("秒数为：%ld\n",sec);
    /*==============================*/
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    float res = getAverage(ptr,size);
    printf("数组的平均值为：%f\n", res);


    /*==============================*/
    int a[10];
    int *po = a;
    getRandom(a,10);
    for(int n=0; n<10; n++)
    {
        printf("%d\n",a[n]);
    }
    return 0;
}