#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000
int stack[MAX];
int top=-1;
void push(int x) {
	stack[++top]=x;
}
int pop() {
	return stack[top--];
}
int main() {
	char line[1000];
	printf("Enter postfix expression with space-separated tokens (e.g., '12 3 + 4 *'):\n");
	// read whole line
	fgets(line, sizeof(line), stdin);
	if(line[0]=='\n') fgets(line, sizeof(line), stdin); // consume leftover newline
	// remove trailing newline
	line[strcspn(line, "\n")] = '\0';
	char *token = strtok(line, " ");
	while(token != NULL) {
		if(isdigit(token[0]) || (token[0]=='-' && isdigit(token[1]))) {
			push(atoi(token));
		} else {
			int b = pop();
			int a = pop();
			char op = token[0];
			switch(op) {
			case '+':
				push(a + b);
				break;
			case '-':
				push(a - b);
				break;
			case '*':
				push(a * b);
				break;
			case '/':
				push(a / b);
				break;
			}
		}
		token = strtok(NULL, " ");
	}
	printf("Result = %d\n", pop());
    printf("\nBhawesh Panwar\n");
	return 0;
}
