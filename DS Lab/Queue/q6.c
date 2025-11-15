//6. Write a menu-driven program for performing all queue operations. 

#include <stdio.h>

#define MAXSIZE 5

int queue[MAXSIZE];
int rear = -1, front = 0;

void insert()
{
    int n;
    if (rear == MAXSIZE - 1)
    {
        printf("Queue is Overloaded.\n");
    }
    else
    {
        printf("Insert Element :");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}

void deletee()
{
    int n;
    if (front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        n = queue[front];
        front++;
        printf("Deleted Element :%d\n", n);
    }
}

void display()
{
    if (front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("---------------------------------\n");
        printf("Queue is :");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d", queue[i]);
        }
        printf("\n");
    }
    printf("---------------------------------\n");
}

int main()
{
    int choice;
    printf("---------------------------------\n");
    printf("Queue Menu-\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    printf("---------------------------------\n");

    do
    {
        printf("\nEnter Your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deletee();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid Input.Read the instructions.\n");
        }

    } while (choice != 4);

    return 0;
}
