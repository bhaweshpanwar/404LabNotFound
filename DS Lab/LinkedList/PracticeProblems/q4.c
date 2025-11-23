#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *list1 = NULL;
struct node *list2 = NULL;
struct node *merged = NULL;

struct node* create_list()
{
    int n;
    char ch;
    struct node *start = NULL, *temp, *new1;
    
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
    
    return start;
}

struct node* merge_sorted_lists(struct node *l1, struct node *l2)
{
    struct node *result = NULL;
    struct node *temp = NULL;
    
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    
    if (l1->data <= l2->data)
    {
        result = l1;
        l1 = l1->next;
    }
    else
    {
        result = l2;
        l2 = l2->next;
    }
    
    temp = result;

    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data <= l2->data)
        {
            temp->next = l1;
            l1 = l1->next;
        }
        else
        {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    
    // Attach remaining nodes
    if (l1 != NULL)
        temp->next = l1;
    else
        temp->next = l2;
    
    return result;
}

void display(struct node *start)
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
    printf("Merge Two Sorted Linked Lists\n");
    printf("==========================================\n\n");
    
    printf("Create FIRST sorted linked list:\n");
    list1 = create_list();
    
    printf("\nCreate SECOND sorted linked list:\n");
    list2 = create_list();
    
    printf("\nList 1: ");
    display(list1);
    
    printf("List 2: ");
    display(list2);

    merged = merge_sorted_lists(list1, list2);
    
    printf("\nMerged Sorted List:\n");
    display(merged);
    printf("\nBhawesh Panwar\n");
    
    return 0;
}
