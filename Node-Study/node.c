#include  <stdio.h>
#include  <stdlib.h>

//链表节点
typedef struct Node 
{
    int data;
    struct Node *next;
}Node;

//链表创建
Node *createNode(int value) 
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("fail\n");
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//链表头部插入
void insertATHead(Node **head,int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

//遍历链表
void prinflist(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d->",current->data);
        current = current->next;
    }
    printf("NULL\n");
}

//链表销毁
void deletelist(Node **head)
{
    Node *current = *head;
    while (current != NULL)
    {
        Node *next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

int main()
{
    Node *head = NULL;  //初始化头指针

    insertATHead(&head,10);
    insertATHead(&head,20);
    insertATHead(&head,30);

    printf("链表内容： \n");
    prinflist(head);

    deletelist(&head);

    printf("链表内容： \n");
    prinflist(head);

    return 0;

}
