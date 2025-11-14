#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 200
char stack[MAX];
int top = -1;
void push(char c){ stack[++top] = c; }
char pop(){ return stack[top--]; }
char peek(){ if(top==-1) return '\0'; return stack[top]; }
int isOperator(char c){
return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int precedence(char c){
if(c=='^') return 3;
if(c=='*' || c=='/') return 2;
if(c=='+' || c=='-') return 1;
return 0;
}
int main(){
char infix[MAX], postfix[MAX];
int i=0,k=0;
printf("Enter infix expression (no spaces): ");
scanf("%s", infix);
while(infix[i] != '\0'){
char ch = infix[i];
if(isalnum(ch)){ // operand -> add to output
postfix[k++] = ch;
} else if(ch == '('){
push(ch);
} else if(ch == ')'){
while(top!=-1 && peek() != '(') postfix[k++] = pop();
if(top!=-1) pop(); // remove '('
} else if(isOperator(ch)){
// if operator is right-assoc (^), pop while precedence > current
// else pop while precedence >= current
while(top!=-1 && isOperator(peek()) &&
( (ch=='^' && precedence(peek()) > precedence(ch)) ||
(ch!='^' && precedence(peek()) >= precedence(ch)) ) ) {
postfix[k++] = pop();
}
push(ch);
}
i++;
}
while(top != -1) postfix[k++] = pop();
postfix[k] = '\0';
printf("Postfix: %s\n", postfix);
return 0;
}