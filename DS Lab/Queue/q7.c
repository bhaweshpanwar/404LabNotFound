#include <stdio.h>
#define MAXSIZE 5

int cqueue[MAXSIZE];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1 && rear == -1);
}

int isFull() {
    return ((rear + 1) % MAXSIZE == front);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAXSIZE;
    }
    cqueue[rear] = value;
    printf("%d enqueued into circular queue at position %d\n", value, rear);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return;
    }
    int value = cqueue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAXSIZE;
    }
    printf("%d dequeued from circular queue\n", value);
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    enqueue(50);
    enqueue(60); 

printf("\nBhawesh Panwar");
return 0;
}
