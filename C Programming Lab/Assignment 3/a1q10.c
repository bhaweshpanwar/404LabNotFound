#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];
    }

    printf("Product of array elements = %lld\n", product);
    return 0;
}
