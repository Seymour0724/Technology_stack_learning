#include<stdio.h>
#include<string.h>

struct
{
    unsigned int widthValidated:16;
    unsigned int heightValidated:17;
}status1;


/*计算位域的大小*/
void bitfiledSize()
{
    //这里你可以随意改变解构体中，位域分配的位数验证位域的大小
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
}

int main()
{
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    }bit;
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
    struct bs *pbit;
    pbit = &bit;
    pbit->a = 0;
    pbit->b&=3;
    pbit->c|=1;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
    return 0;
}

