#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef struct BOOK
{
    char name[50];
    char author[50];
    int book_id;
}Book;

int main()
{
    Book book;
    strcpy(book.author,"seymour");
    strcpy(book.name,"C language");
    book.book_id = 12345;
    printf("This book's author is: %s\n", book.author);
    printf("This book's name is: %s\n", book.name);
    printf("This book's ID is: %d\n", book.book_id);
    return 0;
}