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
        printf("Deleted Element :%d\n",n);
        front++;
    }
}


void display() {
    if(front>rear) {
        printf("Queue is empty.\n");
    }

    else {
        printf("----------------------------------------\n");
        for(int i = front; i<= rear ; i++) {
            printf("%d ",queue[i]);
        }
        printf("\n");
        printf("----------------------------------------\n");
    }
}


void is_empty() {
    if(front == -1 || front > rear) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue is not Empty.\n");
    }
}


void peek() {
    if(front==0) {
        printf("Queue is Empty.\n");
    }
    else {
        printf("Current Peek element :%d",queue[front]);
    }
}

int main() {
    is_empty();
    dequeue();
    enqueue();
    enqueue();
    dequeue();
    enqueue();
    is_empty();
    enqueue();
    display();
}