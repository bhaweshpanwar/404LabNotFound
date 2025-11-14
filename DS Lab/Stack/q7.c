#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE]; 
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
    stack[++top] = value;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    return stack[top--];
}

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        arr[i] = pop();
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11,56,23,89,90,34};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    displayArray(arr, n);

    reverseArray(arr, n);

    printf("Reversed array:\n");
    displayArray(arr, n);

    return 0;
}
