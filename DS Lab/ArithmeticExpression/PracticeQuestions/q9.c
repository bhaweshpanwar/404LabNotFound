#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
int precedence(char op) {
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    return 0;
}

void printStack() {
    printf("Stack: ");
    for(int i=0;i<=top;i++) printf("%c ", stack[i]);
    printf("\n");
}

int main() {
    char infix[] = "(A+B)*C";
    char postfix[MAX];
    int k=0;

    printf("Infix: %s\n", infix);

    for(int i=0; infix[i]!='\0'; i++) {
        char c = infix[i];
        if(isalpha(c)) {
            postfix[k++] = c;
        } else if(c=='(') {
            push(c);
        } else if(c==')') {
            while(top!=-1 && stack[top]!='(') {
                postfix[k++] = pop();
                printStack();
            }
            pop();
        } else {
            while(top!=-1 && precedence(stack[top])>=precedence(c)) {
                postfix[k++] = pop();
                printStack();
            }
            push(c);
            printStack();
        }
    }
    while(top!=-1) {
        postfix[k++] = pop();
        printStack();
    }
    postfix[k]='\0';

    printf("Postfix: %s\n", postfix);
    printf("\nBhawesh Panwar");
    return 0;
}
