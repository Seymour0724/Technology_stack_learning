#include<stdio.h>
#include<string.h>

struct tag
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}book = {"C programming","Seymour", "Computer",23561};

struct staff
{
    char name[30];
    char sex[10];
    char job[30];
};

void printStruct()
{
    printf("The title is: %s\n",book.author);
    printf("The title is: %d\n",&book.author);
    printf("The title is: %d\n",&book.title);
    return;
}

void structPointer()
{
    struct staff *govalley;
    struct staff A;
    strcpy(A.job,"coder");
    strcpy(A.name,"gtz");
    strcpy(A.sex,"famale");
    govalley = &A;
    printf("%s\n",govalley->job);
    printf("%s\n",govalley->name);
    printf("%s\n",govalley->sex);
}

int main()
{
    printStruct();
    structPointer();
    return 0;   
}