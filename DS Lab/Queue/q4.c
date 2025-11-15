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
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;
    }
    int value = queue[front];
    front++;
    printf("%d dequeued from queue\n", value);
    return value;
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    display();

    return 0;

}
