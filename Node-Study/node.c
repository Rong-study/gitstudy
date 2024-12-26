#include  <stdio.h>
#include  <stdlib.h>

//����ڵ�
typedef struct Node 
{
    int data;
    struct Node *next;
}Node;

//������
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

//����ͷ������
void insertATHead(Node **head,int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

//��������
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

//��������
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
    Node *head = NULL;  //��ʼ��ͷָ��

    insertATHead(&head,10);
    insertATHead(&head,20);
    insertATHead(&head,30);

    printf("�������ݣ� \n");
    prinflist(head);

    deletelist(&head);

    printf("�������ݣ� \n");
    prinflist(head);

    return 0;

}
