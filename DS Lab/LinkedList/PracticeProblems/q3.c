#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void create()
{
    int n;
    char ch;
    struct node *temp, *new1;
    
    printf("Enter Element: ");
    scanf("%d", &n);
    
    start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->next = NULL;
    temp = start;
    
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &ch);
    
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter Element: ");
        scanf("%d", &n);
        
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->next = NULL;
        temp->next = new1;
        temp = temp->next;
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    }
}

void reverse_list()
{
    struct node *prev, *current, *next;
    
    if (start == NULL || start->next == NULL)
    {
        printf("List is empty or has only one node.\n");
        return;
    }
    
    prev = NULL;
    current = start;
    next = NULL;
    
    while (current != NULL)
    {
        next = current->next;
        
        current->next = prev;
        
        prev = current;
        current = next;
    }
    
    start = prev;
    
    printf("List reversed successfully!\n");
}

void display()
{
    struct node *temp;
    
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = start;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

int main()
{
    printf("================================\n");
    printf("Reverse a Linked List\n");
    printf("================================\n\n");
    
    printf("Create a linked list:\n");
    create();
    
    printf("\nOriginal ");
    display();
    
    reverse_list();
    
    printf("\nReversed ");
    display();
    
    return 0;
}
