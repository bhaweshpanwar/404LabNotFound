#include <stdio.h>

#define MAXSIZE 5

int queue[MAXSIZE];
int rear = -1, front = 0;

void insert() {
    int n;
    if (rear == MAXSIZE - 1) {
        printf("Queue is Overloaded.\n");
    } else {
        printf("Insert Element : ");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}

void deletee() {
    int n;
    if (front > rear) {
        printf("Queue is Empty.\n");
    } else {
        n = queue[front];
        front++;
        printf("Deleted Element : %d\n", n);
    }
}

void display() {
    if (front > rear) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue is : ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    insert();
    insert();
    insert();
    display();
    deletee();
    display();

printf("\nBhawesh Panwar");
return 0;
}
