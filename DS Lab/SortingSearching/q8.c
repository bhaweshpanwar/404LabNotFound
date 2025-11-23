#include <stdio.h>
int partition_last(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j, temp;
    
    for (j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return i + 1;
}

void quick_sort_last(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition_last(arr, low, high);
        quick_sort_last(arr, low, pi - 1);
        quick_sort_last(arr, pi + 1, high);
    }
}

void quick_sort_last_main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    quick_sort_last(arr, 0, n - 1);
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    quick_sort_last_main();
    printf("\nBhawesh Panwar\n");
    return 0;
}
