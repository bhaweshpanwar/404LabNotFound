#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
int precedence(char op){
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]){
    int k=0; top=-1;
    for(int i=0; infix[i]!='\0'; i++){
        char c=infix[i];
        if(isalpha(c)) postfix[k++]=c;
        else if(c=='(') push(c);
        else if(c==')'){
            while(top!=-1 && stack[top]!='(') postfix[k++]=pop();
            pop();
        } else {
            while(top!=-1 && precedence(stack[top])>=precedence(c)) postfix[k++]=pop();
            push(c);
        }
    }
    while(top!=-1) postfix[k++]=pop();
    postfix[k]='\0';
}

void reverse(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        char t=str[i]; str[i]=str[len-i-1]; str[len-i-1]=t;
    }
}

void infixToPrefix(char infix[], char prefix[]){
    char rev[MAX], postfix[MAX];
    strcpy(rev,infix);
    reverse(rev);
    for(int i=0;rev[i]!='\0';i++){
        if(rev[i]=='(') rev[i]=')';
        else if(rev[i]==')') rev[i]='(';
    }
    infixToPostfix(rev,postfix);
    strcpy(prefix,postfix);
    reverse(prefix);
}

int main(){
    char infix[MAX], result[MAX];
    int choice;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    printf("\nMenu:\n1. Infix to Postfix\n2. Infix to Prefix\nEnter choice: ");
    scanf("%d",&choice);

    if(choice==1){
        infixToPostfix(infix,result);
        printf("Postfix: %s\n", result);
    } else if(choice==2){
        infixToPrefix(infix,result);
        printf("Prefix: %s\n", result);
    } else {
        printf("Invalid choice.\n");
    }
    printf("\nBhawesh Panwar");
    return 0;
}
