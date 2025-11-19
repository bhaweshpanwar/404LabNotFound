#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main() {
    char expr[] = "- + 7 * 4 5 + 2 0";
    int stack[MAX], top = -1;

    #define PUSH(x) stack[++top] = (x)
    #define POP()   stack[top--]

    printf("Prefix: %s\n", expr);

    for (int i = (int)strlen(expr) - 1; i >= 0; i--) {
        if (expr[i] == ' ') continue;

        if (isdigit(expr[i])) {
            int num = 0, place = 1;
            while (i >= 0 && isdigit(expr[i])) {
                num += (expr[i] - '0') * place;
                place *= 10;
                i--;
            }
            PUSH(num);
            i++;
        } else {
            int a = POP();
            int b = POP();
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
