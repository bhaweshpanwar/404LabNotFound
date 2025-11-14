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


int main() {
    dequeue();
    enqueue();
    enqueue();
    dequeue();
}