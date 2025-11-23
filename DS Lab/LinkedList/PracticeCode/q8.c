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

void deleteFirst(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted node: %d\n", temp->data);
    free(temp);
}

int main()
{
    struct Node *head, *n1, *n2;

    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = n1;
    
    n1->data = 20;
    n1->next = n2;
    
    n2->data = 30;
    n2->next = NULL;
    
    printf("Before deletion:\n");
    traverse(head);

    deleteFirst(&head);
    
    printf("\nAfter deletion:\n");
    traverse(head);
    printf("\nBhawesh Panwar\n");
    return 0;
}