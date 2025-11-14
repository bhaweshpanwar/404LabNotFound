#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

int queue[MAXSIZE];
int rear = -1, front = 0;

void enqueue() {
    int n;
    if(rear == MAXSIZE-1) {
        printf("Queue is Overflowed.\n");
    }
    else {
        printf("Enter an element :");
        scanf("%d",&n);
        rear++;
        queue[rear] = n;
    }
}

void dequeue() {
    int n;
    if(front > rear) {
        printf("Queue is Empty.\n");
    }
    else {
        n = queue[front];
        printf("Deleted Element :",n);
        front++;
    }
}

void display() {
    if(front > rear) {
        printf("Queue is empty.\n");
    }
    else {
        printf("---------------------------------\n");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
        printf("---------------------------------\n");
    }
}

int main() {
    int choice;
    printf("---------------------------------\n");
    printf("-----Queue Menu-----\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    printf("---------------------------------\n");
    do {
        printf("Enter Choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            break;

            default:
             printf("Invalid Input. Read the instructions.");
        }
    }while (choice!=4);

  
    return 0;
}