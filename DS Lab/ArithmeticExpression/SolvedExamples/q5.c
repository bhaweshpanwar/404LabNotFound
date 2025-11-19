#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXTOK 200
int stackVals[MAXTOK];
int top=-1;

void push(int x) {
	stackVals[++top]=x;
}

int pop() {
	return stackVals[top--];
}

int main() {
	char line[1000];
	char *tokens[200];
	int tcount=0;
	printf("Enter prefix expression with space-separated tokens (e.g., '+ 3 * 4 5'):\n");
	fgets(line, sizeof(line), stdin);
	if(line[0]=='\n') fgets(line, sizeof(line), stdin);
	line[strcspn(line, "\n")] = '\0';
	// tokenize (left-to-right) and store tokens
	char *tok = strtok(line, " ");
	while(tok!=NULL) {
		tokens[tcount++]=tok;
		tok=strtok(NULL," ");
	}
	// evaluate from right to left
	for(int i=tcount-1; i>=0; i--) {
		char *s = tokens[i];
		if(isdigit(s[0]) || (s[0]=='-' && isdigit(s[1]))) {
			push(atoi(s));
		} else {
			int a = pop();
			int b = pop();
			char op = s[0];
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
	}
	printf("Result = %d\n", pop());
    printf("\nBhawesh Panwar\n");
	return 0;
}