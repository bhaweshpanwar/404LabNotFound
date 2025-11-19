#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }

int main() {
    char expr[] = "12 3 4 * + 6 -";
    printf("Postfix: %s\n", expr);

    for(int i = 0; expr[i] != '\0'; i++) {
        if(expr[i] == ' ') continue;

        if(isdigit(expr[i])) {
            int num = 0;
            while(isdigit(expr[i])) {
                num = num*10 + (expr[i]-'0');
                i++;
            }
            push(num);
            i--;
        } else {
            int b = pop();
            int a = pop();
            int res = 0;
            switch(expr[i]) {
                case '+': res = a+b; break;
                case '-': res = a-b; break;
                case '*': res = a*b; break;
                case '/': res = a/b; break;
            }
            push(res);
        }
    }

    printf("Result: %d\n", stack[top]);
    printf("\nBhawesh Panwar");
    return 0;
}
