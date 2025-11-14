#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 200
void reverseStr(char *s){
int n = strlen(s);
for(int i=0;i<n/2;i++){
char t = s[i]; s[i]=s[n-i-1]; s[n-i-1]=t;
}
}
int isOperator(char c){
return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int precedence(char c){
if(c=='^') return 3;
if(c=='*' || c=='/') return 2;
if(c=='+' || c=='-') return 1;
return 0;
}
void infixToPostfix(char *in, char *out){
char stack[MAX]; int top=-1;
int i=0,k=0;
while(in[i]){
char ch = in[i];
if(isalnum(ch)) out[k++]=ch;
else if(ch=='(') stack[++top]=ch;
else if(ch==')'){
while(top!=-1 && stack[top]!='(') out[k++]=stack[top--];
if(top!=-1) top--; // pop '('
} else if(isOperator(ch)){
while(top!=-1 && isOperator(stack[top]) &&
( (ch=='^' && precedence(stack[top])>precedence(ch)) ||
(ch!='^' && precedence(stack[top])>=precedence(ch)) ))
out[k++]=stack[top--];
stack[++top]=ch;
}
i++;
}
while(top!=-1) out[k++]=stack[top--];
out[k]='\0';
}
int main(){
char infix[MAX], temp[MAX], postfix[MAX], prefix[MAX];
printf("Enter infix expression (no spaces): ");
scanf("%s", infix);
strcpy(temp, infix);
reverseStr(temp);
// swap parentheses
for(int i=0; temp[i]; i++){
if(temp[i]=='(') temp[i]=')';
else if(temp[i]==')') temp[i]='(';
}
infixToPostfix(temp, postfix);
reverseStr(postfix);
strcpy(prefix, postfix); // now postfix reversed is prefix
printf("Prefix: %s\n", prefix);
return 0;
}