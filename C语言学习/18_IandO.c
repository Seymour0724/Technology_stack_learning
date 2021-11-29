#include<stdio.h>

void getchar_and_putchar()
{
    int c;
    printf("Enter a char\n");
    c = getchar();
    printf("Entered!\n");
    putchar(c);
    printf("\n");
    return;
}

void gets_and_puts()
{
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    printf("Entered!\n");
    puts(str);
    return;
}

int main()
{
    //getchar_and_putchar();
    gets_and_puts();
    return 0;
}