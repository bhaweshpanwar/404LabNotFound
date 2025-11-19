#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
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
}

void reverse(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char infix[] = "A+B*C";
    char rev[MAX], postfix[MAX], prefix[MAX];

    printf("Infix: %s\n", infix);

    strcpy(rev, infix);
    reverse(rev);

    for(int i = 0; rev[i] != '\0'; i++) {
        if(rev[i] == '(') rev[i] = ')';
        else if(rev[i] == ')') rev[i] = '(';
    }

    top = -1; // reset stack
    infixToPostfix(rev, postfix);

    strcpy(prefix, postfix);
    reverse(prefix);

    printf("Prefix: %s\n", prefix);
    printf("\nBhawesh Panwar");
    return 0;
}
