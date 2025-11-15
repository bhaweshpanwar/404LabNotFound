#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements at even positions:\n");
    for(i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }

    printf("\nElements at odd positions:\n");
    for(i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    return 0;
}
