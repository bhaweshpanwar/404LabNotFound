#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 200
int stack[MAX];
int top = -1;
void push(int x){ stack[++top] = x; }
int pop(){ return stack[top--]; }
int main(){
char exp[MAX]; int i=0;
printf("Enter postfix expression (single-digit operands, no spaces): ");
scanf("%s", exp);
while(exp[i] != '\0'){
char c = exp[i];
if(isdigit(c)) push(c - '0');
else {
int b = pop();
int a = pop();
switch(c){
case '+': push(a + b); break;
case '-': push(a - b); break;
case '*': push(a * b); break;
case '/': push(a / b); break;
}
}
i++;
}
printf("Result = %d\n", pop());
return 0;
}