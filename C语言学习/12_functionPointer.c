#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int Max(int x, int y)
{
    return x>y ? x:y;
}


/*重头戏：回调函数！！！*/
void *init_arr(int *arr, int size, int (*Random)(void))
{
    int *ptr = arr;
    for(int i=0; i<size; i++)
    {
        *(ptr+i) = Random();
    }
}

int Random(void)
{
    //srand((unsigned)time(NULL));
    return rand()%50;
}



int main()
{
    int (*p)(int,int) = &Max;
    int a = 5;
    int b = 6;
    printf("%d与%d中，%d更大！\n", a, b, p(a,b));

    int arr[10];
    // int (*y)(void) = &Random;
    init_arr(arr,10,Random);
    for(int j=0; j<10; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}