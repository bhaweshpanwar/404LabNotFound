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

void find_middle()
{
    struct node *slow, *fast;
    
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    slow = start;
    fast = start;
    
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    printf("\nMiddle element is: %d\n", slow->data);
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
    printf("==========================================\n");
    printf("Find Middle Element of Linked List\n");
    printf("==========================================\n\n");
    
    printf("Create a linked list:\n");
    create();
    
    printf("\n");
    display();
    
    find_middle();
    
    printf("\n--- Slow & Fast Pointer Technique ---\n");
    printf("Slow pointer moves 1 step at a time\n");
    printf("Fast pointer moves 2 steps at a time\n");
    printf("When fast reaches end, slow is at middle!\n");
    printf("\nBhawesh Panwar\n");
    
    return 0;
}
