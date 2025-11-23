#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head, *n1, *n2;

    head = (struct Node*)malloc(sizeof(struct Node));
    n1   = (struct Node*)malloc(sizeof(struct Node));
    n2   = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;  head->next = n1;
    n1->data = 10;   n1->next = n2;
    n2->data = 15;   n2->next = NULL;

    traverse(head);
    printf("\nBhawesh Panwar\n");
    return 0;
}
