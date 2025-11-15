#include <stdio.h>

int main() {
    int n, i, smallest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = second = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if(arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }

    printf("Smallest = %d\nSecond Smallest = %d\n", smallest, second);
    return 0;
}
