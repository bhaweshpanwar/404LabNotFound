#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

int search(struct Node* head, int key)
{
    int pos = 1;
    while (head != NULL)
    {
        if (head->data == key)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main()
{
    struct Node *head, *n1;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));

    head->data = 50;
    head->next = n1;
    
    n1->data = 70;
    n1->next = NULL;

    int result = search(head, 70);
    
    if (result != -1)
        printf("Element found at position %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}