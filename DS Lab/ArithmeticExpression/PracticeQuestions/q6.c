#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

void push(char *str) {
    strcpy(stack[++top], str);
}

char* pop() {
    return stack[top--];
}

int main() {
    char postfix[] = "AB+C*";
    char a[2], b[2], temp[MAX];

    printf("Postfix: %s\n", postfix);

    for(int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if(c >= 'A' && c <= 'Z') {
            char str[2] = {c, '\0'};
            push(str);
        } else {
            char op2[MAX], op1[MAX];
            strcpy(op2, pop());
            strcpy(op1, pop());
            sprintf(temp, "(%s%c%s)", op1, c, op2);
            push(temp);
        }
    }

    printf("Infix: %s\n", stack[top]);
    printf("\nBhawesh Panwar");
    return 0;
}
