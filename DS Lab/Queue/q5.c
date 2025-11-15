#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAXSIZE - 1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued into queue at position %d\n", value, rear);
    peek();
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return;
    }
    int value = queue[front];
    front++;
    printf("%d dequeued from queue\n", value);
    peek(); 
}

void peek() {
    if (isEmpty()) {
        printf("Queue is empty! No front element.\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    peek();
    return 0;
}
