#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE], front = -1, rear = -1;

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

void countEvenOdd() {
    int even = 0, odd = 0;
    for (int i = front; i <= rear; i++) {
        if (queue[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even count = %d, Odd count = %d\n", even, odd);
}

int main() {
    enqueue(10); 
    enqueue(21); 
    enqueue(32); 
    enqueue(43);
    countEvenOdd();
    return 0;
}
