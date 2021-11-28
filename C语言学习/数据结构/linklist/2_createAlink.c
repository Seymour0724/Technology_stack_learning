#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct listNode{
    int data;
    struct listNode *next;
};

typedef struct listNode list_single;
list_single *create_list_node(int data)
{
    list_single *node = NULL;
    node = (list_single *)malloc(sizeof(list_single));
    if(node == NULL){
        printf("¶¯Ì¬ÄÚ´æ·ÖÅäÊ§°Ü£¡\n");
    }
    memset(node,0,sizeof(list_single));
    node->data = data;
    node->next = NULL;
    return node;
}

list_single *create_linklist(int *arr)
{
    list_single *head = create_list_node(arr[0]);
    list_single *p = head;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<arrSize; i++)
    {
        p->next = create_list_node(arr[i]);
        p = p->next;
    }
    free(p);
    return head;
}

int main()
{
    int data = 100;
    list_single *node_ptr = create_list_node(data);
    printf("node.data = %d\n",node_ptr->data);
    printf("node.next = %d\n",node_ptr->next);
    free(node_ptr);
    int nums[5] = {1,2,3,4,5};
    list_single *li = create_linklist(nums);
    list_single *p = li;
    while(p->next!=NULL){
        printf("%d\n", p->data);
        p = p->next;
    }
    return 0;
}