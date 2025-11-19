#include <string.h>
#define MAX 200

void pushStr(char stack[][MAX], int *top, const char *s) {
	strcpy(stack[++(*top)], s);
}

char* popStr(char stack[][MAX], int *top) {
	return stack[(*top)--];
}

int main() {
	char exp[MAX];
	printf("Enter postfix expression (no spaces, single-char operands): ");
	scanf("%s", exp);
	char stackStr[200][MAX];
	int top=-1;
	for(int i=0; exp[i]; i++) {
		char ch = exp[i];
		if(isalnum(ch)) {
			char tmp[2] = {ch, '\0'};
			pushStr(stackStr, &top, tmp);
		} else {
			char op2[MAX], op1[MAX], res[MAX];
			strcpy(op2, popStr(stackStr, &top));
			strcpy(op1, popStr(stackStr, &top));
			snprintf(res, sizeof(res), "(%s%c%s)", op1, ch, op2);
			pushStr(stackStr, &top, res);
		}
	}
	printf("Infix: %s\n", stackStr[top]);
    printf("\nBhawesh Panwar\n");
	return 0;
}