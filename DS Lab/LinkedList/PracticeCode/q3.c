#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int countNodes(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node *head, *n1, *n2;

    head = (struct Node*)malloc(sizeof(struct Node));
    n1   = (struct Node*)malloc(sizeof(struct Node));
    n2   = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10; head->next = n1;
    n1->data = 20;   n1->next = n2;
    n2->data = 30;   n2->next = NULL;

    printf("Total nodes = %d\n", countNodes(head));
    printf("\nBhawesh Panwar\n");
    return 0;
}
