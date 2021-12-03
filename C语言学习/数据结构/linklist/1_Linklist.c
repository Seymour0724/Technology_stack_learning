#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node,*LinkedList;

LinkedList listinit(){
    Node *L;
    L = (Node*)malloc(sizeof(Node));
    //什么时候一定要去想着验证申请空间是否成功
    if(L==NULL){
        printf("申请空间失败！");
    }
    L->next=NULL;
}

//单链表建立，头插法
LinkedList LinkedListCreatH(){
    Node *L;
    L = (Node *)malloc(sizeof(Node));
    L->next = NULL;

    int x;
    while(scanf("%d",&x)!=EOF){
        Node *p;
        p = (Node *)malloc(sizeof(Node));
        p->data = x;
        p->next = L->next;
        L->next = p;
    }
    return L;
}

//单链表建立，尾插法
LinkedList LinkedListCreatT(){
    Node *L;
    L = (Node *)malloc(sizeof(Node));
    L->next = NULL;
    Node *r;
    r = L;
    int x;
    while(scanf("%d",&x)!=EOF){
        Node *p;
        p = (Node *) malloc(sizeof(Node));
        p->data = x;
        r->next = p;
        r = p;
    }
    r->next=NULL;
    return L;
}



int main()
{
   return 0;
}