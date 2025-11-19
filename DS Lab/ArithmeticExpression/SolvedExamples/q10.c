#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 200
char stack[MAX];
int top=-1;

void push(char c) {
	stack[++top]=c;
}

char pop() {
	return stack[top--];
}

char peek() {
	if(top==-1) return '\0';
	return stack[top];
}

int precedence(char c) {
	if(c=='^') return 3;
	if(c=='*'||c=='/') return 2;
	if(c=='+'||c=='-') return 1;
	return 0;
}

void printStack() {
	printf("Stack(top->bottom): ");
	for(int i=top; i>=0; i--) printf("%c", stack[i]);
	printf("\n");
}

int main() {
	char exp[MAX], out[MAX];
	int i=0,k=0;
	printf("Enter infix (no spaces): ");
	scanf("%s", exp);
	printf("Step-by-step conversion:\n");
	while(exp[i]) {
		char ch = exp[i];
		printf("Read '%c' -> ", ch);
		if(isalnum(ch)) {
			out[k++]=ch;
			printf("Output appended: %c | ", ch);
		} else if(ch=='(') {
			push(ch);
			printf("Pushed '('\n");
		} else if(ch==')') {
			while(top!=-1 && peek()!='(') out[k++]=pop();
			pop();
			printf("Popped until '('\n");
		} else {
			while(top!=-1 && precedence(peek())>=precedence(ch)) out[k++]=pop();
			push(ch);
			printf("Pushed operator '%c' | ", ch);
		}
		printStack();
		i++;
	}
	while(top!=-1) out[k++]=pop();
	out[k]='\0';
	printf("Final Postfix: %s\n", out);
    printf("\nBhawesh Panwar");
	return 0;
}