#include <stdio.h>
#define MAXSIZE 100

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

void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("----------------------------------------\n");
    printf("Stack elements (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    printf("----------------------------------------\n");
}

void insertMultiple(int values[], int n) {
    for (int i = 0; i < n; i++) {
        push(values[i]); 
    }
}

int main() {
    int nums[] = {65,78,34,90,32,10,5,89};
    int n = sizeof(nums) / sizeof(nums[0]);

    insertMultiple(nums, n); 
    display(); 
printf("\nBhawesh Panwar");
return 0;
}
