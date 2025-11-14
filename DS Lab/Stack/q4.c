
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

int count() {
    printf("\nNumber of elements in stack: %d\n", top + 1);
}

int main() {         
    push(10);    
    push(20);           
    push(30);
    pop();
    push(40);
    count();  

    return 0;
}



