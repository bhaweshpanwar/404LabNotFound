#include <stdio.h>
#define MAXSIZE 10

int arr[MAXSIZE];  
int top = -1;      

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAXSIZE - 1;
}


void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    top++;    
    arr[top] = value;    
    printf("%d pushed into stack at position %d\n", value, top);
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    int value = arr[top]; 
    top--;                 
    return value;
}

int main() {
    pop();
    push(10);
    push(20);
    push(30);
    printf("%d popped from stack\n", pop());

printf("\nBhawesh Panwar");
return 0;
}
