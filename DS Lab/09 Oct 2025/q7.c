//Circular Queue 

#include<stdio.h>
#include<conio.h>

#define MAXSIZE 4
int cqueue[MAXSIZE];
int front = -1, rear = -1;

void enqueue(int n) {
    if((rear+1)%MAXSIZE == front) {
        printf("Queue is Overflowed.\n");
        return;
    }
    if (rear == -1 && front == -1) {
        rear = 0;
        front = 0;
    }
    else {
        rear = (rear+1)%MAXSIZE;
    }
    cqueue[rear] = n;
}

void dequeue() {
    if(rear ==-1 && front ==-1) {
        printf("Queue is Empty.\n");
    }
    else {
        int n = cqueue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front+1)%MAXSIZE;
        }
        printf("Deleted Element :%d\n",n);
    }
}

void display() {
    if(rear ==-1 && front ==-1) {
        printf("Queue is Empty.\n");
    }
    else {
        int i;
        printf("---------------------------------\n");
        printf("Elements are :");
        for(i = front; i!=(rear+1) ; i = (i+1)%MAXSIZE) {
            printf("%d ",cqueue[i]);
        }
        printf("\n");
        printf("---------------------------------\n");
    }
}

// void display() {
//     if (front == -1) {
//         printf("Queue is Empty.\n");
//     } else {
//         int i = front;
//         printf("---------------------------------\n");
//         printf("Elements are: ");
//         do {
//             printf("%d ", cqueue[i]);
//             i = (i + 1) % MAXSIZE;
//         } while (i != (rear + 1) % MAXSIZE); 
//         printf("\n---------------------------------\n");
//     }
// }


int main() {
    int choice;
    int n;
    printf("---------------------------------\n");
    printf("-----Circular Queue Menu-----\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    printf("---------------------------------\n");
    do {
        printf("Enter Choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Element :");
            scanf("%d",&n);
            enqueue(n);
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