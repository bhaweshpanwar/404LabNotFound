#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE], front = -1, rear = -1;
int stack[MAXSIZE], top = -1;

void enqueue(int val) {
    if (rear == MAXSIZE - 1) { printf("Queue Overflow\n"); return; }
    if (front == -1) front = 0;
    queue[++rear] = val;
}
int dequeue() {
    if (front == -1 || front > rear) { 
        printf("Queue Empty\n"); 
        return -1; 
    }
    return queue[front++];
}

void push(int val) { 
    stack[++top] = val;
}

int pop() { 
    return stack[top--]; 
}

void reverseQueue() {
    while (front <= rear) push(dequeue());  
    front = 0; rear = -1;                  
    while (top >= 0) enqueue(pop());        
}

void display() {
    for (int i = front; i <= rear; i++) 
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10); 
    enqueue(20); 
    enqueue(30); 
    enqueue(40);
    printf("Original Queue: "); 
    display();
    reverseQueue();
    printf("Reversed Queue: "); 
    display();
    return 0;
}
