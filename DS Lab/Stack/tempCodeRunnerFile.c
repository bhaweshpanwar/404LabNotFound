void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("----------------------------------------\n");
    printf("Stack elements (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    printf("----------------------------------------\n");
}