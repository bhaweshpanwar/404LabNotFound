#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAXSIZE - 1) { 
        printf("Counter full!\n"); 
        return; 
    }
    if (front == -1) 
        front = 0;
    queue[++rear] = val;
    printf("Person %d entered queue.\n", val);
}

void dequeue() {
    if (front == -1 || front > rear) { 
        printf("No one in queue.\n"); 
        return; 
    }
    printf("Person %d got ticket.\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear) { 
        printf("Queue empty.\n"); 
        return; 
    }
    printf("People waiting: ");
    for (int i = front; i <= rear; i++) 
    printf("%d ", queue[i]);
    printf("\n");
}
int main() {
    enqueue(101); enqueue(102); enqueue(103);
    display();
    dequeue();
    display();
    enqueue(104);
    display();
printf("\nBhawesh Panwar");
return 0;
}
