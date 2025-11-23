#include <stdio.h>
int get_max(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void counting_sort_for_radix(int arr[], int n, int exp)
{
    int output[n];
    int count[10] = {0};
    int i;
    
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radix_sort(int arr[], int n)
{
    int max = get_max(arr, n);
    int exp;
    
    for (exp = 1; max / exp > 0; exp *= 10)
        counting_sort_for_radix(arr, n, exp);
}

void radix_sort_main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (non-negative): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    radix_sort(arr, n);
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    radix_sort_main();
    printf("\nBhawesh Panwar\n");
    return 0;
}
