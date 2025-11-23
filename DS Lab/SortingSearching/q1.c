#include <stdio.h>
#include <stdlib.h>

void bubble_sort_count_swaps()
{
    int n, i, j, temp, swap_count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap_count++;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nTotal number of swaps: %d\n", swap_count);
}

int main()
{
    bubble_sort_count_swaps();
    printf("\nBhawesh Panwar\n");   
    return 0;
}