#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main() {
    char expr[] = "2 3 * 5 4 * + 9 -";
    int stack[MAX], top = -1;

    #define PUSH(x) stack[++top] = (x)
    #define POP()   stack[top--]

    printf("Postfix: %s\n", expr);

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == ' ') continue;

        if (isdigit(expr[i])) {
            int num = 0;
            while (isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            PUSH(num);
            i--;
        } else {
            int b = POP();
            int a = POP();
            int res = 0;
            switch (expr[i]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/': res = a / b; break;
                default:
                    printf("Invalid operator: %c\n", expr[i]);
                    return 0;
            }
            PUSH(res);
        }
    }

    printf("Result: %d\n", stack[top]);
    printf("\nBhawesh Panwar");
    
    return 0;
}
