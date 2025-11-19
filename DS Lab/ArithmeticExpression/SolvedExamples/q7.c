#include <stdio.h>
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
	printf("Enter prefix expression (no spaces, single-char operands): ");
	scanf("%s", exp);
	char stackStr[200][MAX];
	int top=-1;
	int len = strlen(exp);
	for(int i = len-1; i>=0; i--) {
		char ch = exp[i];
		if(isalnum(ch)) {
			char tmp[2] = {ch, '\0'};
			pushStr(stackStr, &top, tmp);
		} else {
			char op1[MAX], op2[MAX], res[MAX];
			strcpy(op1, popStr(stackStr, &top));
			strcpy(op2, popStr(stackStr, &top));
			snprintf(res, sizeof(res), "%s%s%c", op1, op2, ch); // postfix: op1 op2 operator
			pushStr(stackStr, &top, res);
		}
	}
	printf("Postfix: %s\n", stackStr[top]);
    printf("\nBhawesh Panwar");
	return 0;
}