#include<stdio.h>
#include<string.h>

union data
{
    int i;
    float f;
    char name[20];
};

int main()
{
    union data d1;
    strcpy(d1.name, "seymour");
    printf("%d\n", sizeof(union data));
    return 0;
}