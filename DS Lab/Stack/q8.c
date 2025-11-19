#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

char stack[MAXSIZE];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAXSIZE - 1;
}

void push(char c) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %c\n", c);
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return '\0';
    }
    return stack[top--];
}

int isPalindrome(char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    for (int i = 0; i < len; i++) {
        if (str[i] != pop()) {
        return 0; 
        }
    }

    return 1;
}

int main() {
    char str[MAXSIZE];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str);
    }

printf("\nBhawesh Panwar");
return 0;
}
