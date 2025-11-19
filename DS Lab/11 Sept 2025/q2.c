// Implement a stack using array - create a stack with push and pop operations.

#include <stdio.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int top = -1;

void push(int n) {
    if(top == MAXSIZE-1) 
        printf("Stack is Full.\n");
    else {
        stack[++top] = n;
        printf("Element Inserted Successfully.\n");
    }
}

void pop() {
    if(top == -1) 
        printf("Stack is empty nothing to pop.\n");
    
    else {
        int temp = stack[top];
        top--;
        printf("%d Element popped successfully.\n",temp);
    }
}

void display() {
    if(top==-1) 
        printf("Stack is Empty.\n");
    
    else {
        printf("------------------------------------------\n");
        printf("Current Stack Elements are :");
    
        for(int i = 0; i <= top ; i++) {
            printf("%d ",stack[i]);
        }
        printf("\n");
    
        printf("------------------------------------------\n");
    }

}

//count stack element
void count() {
    printf("%d elements are there in the stack.\n",(top+1));
}

void peek() {
    printf("%d",stack[top]);
}

int main() {

    int value;
    int n;
    printf("-------------------STACK MENU-----------------------\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Count\n");
    printf("5.Exit\n");
    printf("------------------------------------------\n");

    do {
        printf("Enter your command :");
        scanf("%d",&value);

        switch (value)
        {
        case 1:
            /* code */
            printf("Enter Element to push :");
            scanf("%d",&n);
            push(n);
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;

        case 4:
            count();
            break;

        case 5:
            break;
    
        default:
            break;
        }
    }while(value !=5);


printf("\nBhawesh Panwar");
return 0;
}