#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void traverse(struct Node* head)
{
    printf("Normal Display: ");
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void reverseDisplay(struct Node* head)
{
    if (head == NULL)
        return;
    
    reverseDisplay(head->next);
    printf("%d ", head->data);
}

int main()
{
    struct Node *head, *n1, *n2, *n3;
    
    // Create list: 10 -> 20 -> 30 -> 40
    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = n1;
    
    n1->data = 20;
    n1->next = n2;
    
    n2->data = 30;
    n2->next = n3;
    
    n3->data = 40;
    n3->next = NULL;
    
    traverse(head);
    
    printf("Reverse Display: ");
    reverseDisplay(head);
    printf("\n");
    printf("\nBhawesh Panwar\n");
    return 0;
}