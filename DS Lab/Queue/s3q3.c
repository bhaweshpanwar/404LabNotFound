#include <stdio.h>
#define MAXSIZE 10

int stack1[MAXSIZE], stack2[MAXSIZE];
int top1 = -1, top2 = -1;

void push1(int val) { stack1[++top1] = val; }
void push2(int val) { stack2[++top2] = val; }
int pop1() { return stack1[top1--]; }
int pop2() { return stack2[top2--]; }

void enqueue(int val) { push1(val); }
int dequeue() {
    if (top2 == -1) {
        while (top1 >= 0) push2(pop1());
    }
    if (top2 == -1) { printf("Queue Empty\n"); return -1; }
    return pop2();
}
int main() {
    enqueue(10); enqueue(20); enqueue(30);
    printf("Dequeued: %d\n", dequeue());
    enqueue(40);
    printf("Dequeued: %d\n", dequeue());
    return 0;
}
