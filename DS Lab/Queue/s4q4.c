#include <stdio.h>
#define MAXSIZE 10

struct Item { 
    int data; int priority; 
};

struct Item queue[MAXSIZE];
int size = 0;

void insert(int val, int pr) {
    if (size == MAXSIZE) { printf("Queue Full\n"); return; }
    int i = size - 1;
    while (i >= 0 && queue[i].priority < pr) {
        queue[i + 1] = queue[i];
        i--;
    }
    queue[i + 1].data = val;
    queue[i + 1].priority = pr;
    size++;
}
void display() {
    for (int i = 0; i < size; i++)
        printf("%d(p=%d) ", queue[i].data, queue[i].priority);
    printf("\n");
}
int main() {
    insert(10, 2);
    insert(20, 1);
    insert(30, 3);
    printf("Priority Queue: "); display();
printf("\nBhawesh Panwar");
return 0;
}
