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
    //ʲôʱ��һ��Ҫȥ������֤����ռ��Ƿ�ɹ�
    if(L==NULL){
        printf("����ռ�ʧ�ܣ�");
    }
    L->next=NULL;
}

//����������ͷ�巨
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

//����������β�巨
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