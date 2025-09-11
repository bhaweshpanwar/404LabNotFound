// Implement a stack using array - create a stack with push and pop operations.

#include <stdio.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int top = -1;

void push(int n) {
    if(top == MAXSIZE-1) 
        printf("Stack is Full.\n");
    else {
        stack[++top] = n;
        printf("Element Inserted Successfully.\n");
    }
}

void pop() {
    if(top == -1) 
        printf("Stack is empty nothing to pop.\n");
    
    else {
        int temp = stack[top];
        top--;
        printf("%d Element popped successfully.\n",temp);
    }
}

void display() {
    printf("------------------------------------------\n");
    printf("Current Stack Elements are :");

    for(int i = top; i >=0 ; i--) {
        printf("%d ",stack[i]);
    }
    printf("\n");

    printf("------------------------------------------\n");
}

int main() {
    pop(); //err

    push(4);
    push(5);
    push(6);

    push(7); //err

    display();

}