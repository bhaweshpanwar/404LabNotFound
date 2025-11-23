#include <stdio.h>
int partition_first(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    
    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
            i++;
        
        while (arr[j] > pivot)
            j--;
        
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    
    return j;
}

void quick_sort_first(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition_first(arr, low, high);
        quick_sort_first(arr, low, pi - 1);
        quick_sort_first(arr, pi + 1, high);
    }
}

void quick_sort_first_main()
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
    
    quick_sort_first(arr, 0, n - 1);
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    quick_sort_first_main();
    printf("\nBhawesh Panwar\n");
    return 0;
}