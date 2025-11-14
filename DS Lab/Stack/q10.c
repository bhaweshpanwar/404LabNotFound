#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

char stack[MAXSIZE][50];  // stack to store actions (strings)
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAXSIZE - 1;
}

void push(char action[]) {
    if (isFull()) {
        printf("Action history full! Cannot push.\n");
        return;
    }
    top++;
    strcpy(stack[top], action);
    printf("Action performed: %s\n", action);
}

void undo() {
    if (isEmpty()) {
        printf("No actions to undo!\n");
        return;
    }
    printf("Undo action: %s\n", stack[top]);
    top--;
}

void displayActions() {
    if (isEmpty()) {
        printf("No actions in history.\n");
        return;
    }
    printf("Current actions (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }
}

int main() {
    push("Type Hello");
    push("Type World");
    push("Delete World");

    displayActions();

    undo();
    undo();

    displayActions();

    return 0;
}
