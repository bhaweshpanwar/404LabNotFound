#include <stdio.h>

#define MAX 200

int main() {
    char expr[MAX];

    printf("Enter expression: ");
    if (!fgets(expr, sizeof(expr), stdin)) {
        printf("Input error.\n");
        return 0;
    }

    char stack[MAX];
    int top = -1;

    #define PUSH(x) stack[++top] = (x)
    #define POP()   stack[top--]
    #define EMPTY() (top < 0)
    #define PEEK()  stack[top]

    int balanced = 1;

    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (c == '(' || c == '{' || c == '[') {
            PUSH(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (EMPTY()) { balanced = 0; break; }
            char open = PEEK();
            if ((c == ')' && open == '(') ||
                (c == '}' && open == '{') ||
                (c == ']' && open == '[')) {
                POP();
            } else {
                balanced = 0;
                break;
            }
        }
    }

    if (!EMPTY()) balanced = 0;

    if (balanced) {
        printf("Balanced\n");
    } else {
        printf("Unbalanced\n");
    }

    printf("\nBhawesh Panwar");
    return 0;
}
