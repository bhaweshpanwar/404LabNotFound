// Because stacks naturally reverse order:

// Push elements from the queue into the stack → they get stacked in original order.
// Pop elements from the stack back into the queue → they come out in reverse order.

#include<stdio.h>
#include<conio.h>

#define MAXSIZE 10
int queue[MAXSIZE] = {10,20,30,40};
int stack[MAXSIZE];
int top = -1;
int rear = 3, front = 0;

void push(int n) {
    if(top == MAXSIZE-1) 
        printf("Stack is Full.\n");
    else {
        stack[++top] = n;
        printf("Element Inserted Successfully.\n");
    }
}

void enqueue(int temp) {
    if(rear == MAXSIZE-1) {
        printf("Queue is Overflowed.\n");
    }
    else {
        rear++;
        queue[rear] = temp;
    }
}

void pop() {
    if(top == -1) 
        printf("Stack is empty nothing to pop.\n");
    
    else {
        int temp = stack[top];
        top--;
        enqueue(temp);
        printf("%d Element popped successfully.\n",temp);
    }
}


void dequeue() {
    int n;
    if(front > rear) {
        printf("Queue is Empty.\n");
    }
    else {
        n = queue[front];
        push(n);
        // printf("Deleted Element :%d\n",n);
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

int main() {
    // Step 1: Move all queue elements into stack
    while (front <= rear) {
        dequeue();
    }

    // Step 2: Pop from stack and enqueue back into queue
    for (int i = top; i >= 0; i--) {
        pop();
    }

    // Step 3: Reset front and rear to reflect new queue state
    front = 0;
    rear = 3;

    // Step 4: Display reversed queue
    display();

printf("\nBhawesh Panwar");
return 0;
}
