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
    char prefix[] = "+AB";
    char temp[MAX];

    printf("Prefix: %s\n", prefix);

    for(int i = strlen(prefix)-1; i >= 0; i--) {
        char c = prefix[i];
        if(c >= 'A' && c <= 'Z') {
            char str[2] = {c, '\0'};
            push(str);
        } else {
            char op1[MAX], op2[MAX];
            strcpy(op1, pop());
            strcpy(op2, pop());
            sprintf(temp, "%s%s%c", op1, op2, c);
            push(temp);
        }
    }

    printf("Postfix: %s\n", stack[top]);
    printf("\nBhawesh Panwar");
    return 0;
}
