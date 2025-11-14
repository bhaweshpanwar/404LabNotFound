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
    if (top == MAXSIZE - 1) {  
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    top++;                      
    arr[top] = value;           
    printf("%d pushed into stack at position %d\n", value, top);
}


int pop() {
    if (top == -1) {            
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    int value = arr[top];    
    top--;                      
    return value;
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty! No top element.\n");
        return;
    }
    printf("Top element is %d\n", arr[top]);
}

int main() {
    pop();          
    push(10);    
    push(20);           
    printf("%d popped from stack\n", pop());  
    peek();
    return 0;
}


