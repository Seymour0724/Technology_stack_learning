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
    printf("var_runoob ��������ĵ�ַ: %p\n", p);
}

void pick_pointer()
{
    int var = 20;
    int *ip = &var; /*��ָ������д洢var�ĵ�ַ*/
    printf("var�����ĵ�ַ��%p\n", &var);
    /*�洢��ip�����ֵ*/
    printf("ip �д洢��ֵ��%p\n", ip);
    /*ʹ��ָ�����ֵ*/
    printf("*ip������ֵ�ǣ�%d\n", *ip);
}

void NULL_pointer()
{
    int *p = NULL;
    printf("ָ��p�ĵ�ַ�� %p\n", p);
    if (p)
    {
        printf("is not null!\n");
    }
    else
    {
        printf("is null\n");
    }
}

//ָ�����������--����һ��ָ��
void pointer_arithmetic()
{
    int li[] = {1,2,3,4,5};
    int i, *ptr;
    /*ָ���е������ַ--���������������е�һ��ֵ�ĵ�ַ*/
    ptr = li;
    for(int i=0; i<MAX; i++)
    {
        printf("li[%d]��ֵΪ��%d\n",i, *ptr);
        printf("li[%d]�ĵ�ַ��%p\n",i, ptr);
        //ָ����һ��λ��
        ptr++;
    }
    int *pre = &li[MAX-1];
    for(int j=MAX-1; j>=0; j--)
    {
        printf("li[%d]��ֵΪ��%d\n",j, *pre);
        printf("li[%d]�ĵ�ַ��%p\n",j, pre);
        /*ָ��ǰһ��λ��*/
        pre--;
    }
    int *compare = li;
    int k = 0;
    while(compare <= &li[MAX]-1)
    {
        printf("li[%d]��ֵΪ��%d\n",k, *compare);
        printf("li[%d]�ĵ�ַ��%p\n",k, compare);
        /*ָ�����*/
        compare++;
        k++;
    }
}

//ָ���������ϰ
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
        printf("p[%d]��ֵΪ��%p\n", j, p[j]);
        printf("p[%d]ָ���ֵΪ��%d\n", j, *p[j]);
    }
}

//ָ��ָ���ָ��
void ptrToptr()
{
    int value = 10;
    int *p1 = &value;
    int **p2 = &p1;
    printf("value��ֵΪ��%d\n", value);
    printf("p1��ֵΪ��%p��p2ָ���ֵΪ��%p\n", p1, *p2);
    printf("p1ָ���ֵΪ��%d\n",*p1);
}

//ָ�����������д���
void getSeconds(long *ptr)
{
    *ptr = time(NULL);
    return;
}

//������ָ�봫�뺯����������
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

//ָ����Ϊ����
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
    printf("����Ϊ��%ld\n",sec);
    /*==============================*/
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    float res = getAverage(ptr,size);
    printf("�����ƽ��ֵΪ��%f\n", res);


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