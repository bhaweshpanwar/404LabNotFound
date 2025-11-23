#include <stdio.h>
void insertion_sort_count_shifts()
{
    int n, i, j, key, shift_count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            shift_count++;
        }
        arr[j + 1] = key;
    }
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nTotal number of shifts: %d\n", shift_count);
}

int main()
{
    insertion_sort_count_shifts();
    printf("\nBhawesh Panwar\n");
    return 0;
}
