#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void traverse(struct Node* head)
{
    printf("Linked List: ");
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void insertAtPosition(struct Node** head, int value, int pos)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    
    if (pos == 1)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    struct Node *head, *n1, *n2;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = n1;
    
    n1->data = 30;
    n1->next = n2;
    
    n2->data = 40;
    n2->next = NULL;
    
    printf("Before insertion:\n");
    traverse(head);
    
    insertAtPosition(&head, 20, 2);
    
    printf("\nAfter inserting 20 at position 2:\n");
    traverse(head);
    printf("\nBhawesh Panwar\n");
    return 0;
}