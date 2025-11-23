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

void delete_by_value(int value)
{
    struct node *temp, *prev;
    
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    if (start->data == value)
    {
        temp = start;
        start = start->next;
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
        return;
    }
    
    prev = start;
    temp = start->next;
    
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            prev->next = temp->next;
            printf("Deleted node with value: %d\n", temp->data);
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    
    printf("Element not found.\n");
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
    printf("\n");
}

int main()
{
    int value;
    
    printf("================================\n");
    printf("Delete Node by Value\n");
    printf("================================\n\n");
    
    printf("Create a linked list:\n");
    create();
    
    printf("\nOriginal ");
    display();
    
    printf("\nEnter value to delete: ");
    scanf("%d", &value);
    
    delete_by_value(value);
    
    printf("\nAfter deletion:\n");
    display();
    printf("\nBhawesh Panwar\n");

    return 0;
}
