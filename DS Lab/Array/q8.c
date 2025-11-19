#include <stdio.h>
int main() {
    int n, i, search, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found in array\n", search);

printf("\nBhawesh Panwar");
return 0;
}
