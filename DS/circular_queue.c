#include<stdio.h>
#include<conio.h>

#define MAXSIZE 10
int cqueue[MAXSIZE], rear = -1, front = -1;

void enqueue() {
    int n;
    if( (rear+1) % MAXSIZE == front) {
        printf("Queue is Overflowed.\n");
    }

    if(rear ==-1 && front == -1) {
        rear = front = 0;
    }
    else {
        rear = (rear+1) % MAXSIZE;
    }
    cqueue[rear] = n;
}

void dequeue() {
    if(rear == -1 && front == -1) {
        printf("Queue is Empty.\n");
    }

    else {
        int n = cqueue[front];
        if(front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front+1) % MAXSIZE;
        }
        printf("Deleted element :",n);
    }
}

void current_pos() {
    printf("Currently front is at :\n",front);
    printf("Currently rear is at :\n",rear);
}

void display() {
    if(rear == -1 && front == -1) {
        printf("Queue is empty.\n");
    }
    else {
        int i;
        printf("Elements are :");

        for(i = front; i != rear; (i= (i+1)%MAXSIZE)) {
            printf(cqueue[i]);
        }
        
    }
}