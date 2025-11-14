// // 1. Implement a stack using an array – create a stack with push and pop operations. 

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<ctype.h>
// #define MAXSIZE 100

// // Stack structure
// typedef struct {
//     int arr[MAXSIZE];
//     int top;
// } Stack;

// // 1. Stack initialization and basic operations
// void initialize(Stack *s) {
//     s->top = -1;
// }

// // 2. Check if stack is empty
// int isEmpty(Stack *s) {
//     return s->top == -1;
// }

// // 2. Check if stack is full
// int isFull(Stack *s) {
//     return s->top == MAXSIZE - 1;
// }

// // 1. Push operation
// void push(Stack *s, int value) {
//     if (isFull(s)) {
//         printf("Stack Overflow! Cannot push %d\n", value);
//         return;
//     }
//     s->arr[++(s->top)] = value;
// }

// // 1. Pop operation
// int pop(Stack *s) {
//     if (isEmpty(s)) {
//         printf("Stack Underflow! Cannot pop\n");
//         return -1;
//     }
//     return s->arr[(s->top)--];
// }

// int main() {
//     Stack s;
//     initialize(&s);
//     pop(&s);
//     push(&s, 10);
//     push(&s, 20);
//     printf("%d popped from stack\n", pop(&s));

//     return 0;
// }


#include <stdio.h>
#define MAXSIZE 10

int arr[MAXSIZE]; 
int top = -1;       


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

int main() {
    pop();          
    push(10);    
    push(20);           
    printf("%d popped from stack\n", pop());  

    return 0;
}
