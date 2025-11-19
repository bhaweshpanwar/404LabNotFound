#include <stdio.h>
#include <string.h>
#define MAX 200
char stack[MAX];
int top = -1;

void push(char c) {
	stack[++top]=c;
}

char pop() {
	return stack[top--];
}

int isMatching(char open, char close) {
	return (open=='(' && close==')') || (open=='[' && close==']') || (open=='{' && close=='}');
}

int main() {
	char s[MAX];
	printf("Enter expression: ");
	scanf("%s", s);
	for(int i=0; s[i]; i++) {
		char c = s[i];
		if(c=='('||c=='['||c=='{') push(c);
		else if(c==')'||c==']'||c=='}') {
			if(top==-1) {
				printf("Not Balanced\n");
				return 0;
			}
			char o = pop();
			if(!isMatching(o, c)) {
				printf("Not Balanced\n");
				return 0;
			}
		}
	}
	if(top==-1) printf("Balanced\n");
	else printf("Not Balanced\n");
    printf("\nBhawesh Panwar");
	return 0;
}