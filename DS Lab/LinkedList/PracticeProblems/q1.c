#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* insertSorted(struct Node* head, int value) {
    struct Node* newNode = createNode(value);

    if(head == NULL || value < head->data) {
        newNode->next = head;
        return newNode;
    }

    struct Node* current = head;
    while(current->next != NULL && current->next->data < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(40);
    head->next->next->next = createNode(50);

    printf("Original List: ");
    printList(head);

    head = insertSorted(head, 30);

    printf("After Insertion: ");
    printList(head);

    return 0;
}
