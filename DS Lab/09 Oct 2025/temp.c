#include<stdio.h>
#include<conio.h>

#define MAXSIZE 10
int queue[MAXSIZE] = {10, 20, 30, 40};
int stack[MAXSIZE];
int top = -1;
int rear = 3, front = 0;

void push(int n) {
    if(top == MAXSIZE - 1) 
        printf("Stack is Full.\n");
    else {
        stack[++top] = n;
        printf("Element %d pushed to stack.\n", n);
    }
}

void pop() {
    if(top == -1) 
        printf("Stack is empty nothing to pop.\n");
    else {
        int temp = stack[top];
        top--;
        printf("%d popped from stack.\n", temp);
        return temp;
    }
}

void display_queue() {
    if(front > rear) {
        printf("Queue is empty.\n");
    }
    else {
        printf("----------------------------------------\n");
        printf("Queue (Reversed): ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
        printf("----------------------------------------\n");
    }
}

int main() {
    printf("Original Queue: 10 20 30 40\n\n");
    
    // Step 1: Move all queue elements into stack
    printf("Step 1: Moving queue elements to stack...\n");
    while(front <= rear) {
        int n = queue[front];
        push(n);
        front++;
    }
    
    printf("\nStep 2: Popping from stack back to queue...\n");
    // Step 2: Pop from stack and enqueue back into queue
    front = 0;
    rear = -1;
    
    while(top >= 0) {
        int temp = stack[top];
        top--;
        queue[++rear] = temp;
        printf("%d moved to queue.\n", temp);
    }
    
    // Step 3: Display reversed queue
    printf("\n");
    display_queue();
    
printf("\nBhawesh Panwar");
return 0;
}