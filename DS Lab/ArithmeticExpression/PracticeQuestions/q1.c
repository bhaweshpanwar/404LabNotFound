#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

void infixToPostfix(char infix[]) {
    char postfix[MAX];
    int k = 0;

    for(int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        if(isalpha(c)) { 
            postfix[k++] = c;
        }
        else if(c == '(') {
            push(c);
        }
        else if(c == ')') {
            while(top != -1 && stack[top] != '(') {
                postfix[k++] = pop();
            }
            pop(); 
        }
        else { 
            while(top != -1 && precedence(stack[top]) >= precedence(c)) {
                postfix[k++] = pop();
            }
            push(c);
        }
    }

    while(top != -1) {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';

    printf("Postfix: %s\n", postfix);
}

int main() {
    char infix[] = "(A+B)*(C-D)";
    printf("Infix: %s\n", infix);
    infixToPostfix(infix);
    printf("\nBhawesh Panwar");
    
    return 0;
}
