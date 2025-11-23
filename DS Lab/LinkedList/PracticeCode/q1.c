#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head, *second, *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;   head->next = second;
    second->data = 20; second->next = third;
    third->data = 30;  third->next = NULL;

    printf("Linked list created with 3 nodes.\n");
    printf("\nBhawesh Panwar\n");
    return 0;
}
