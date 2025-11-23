#include <stdio.h>
void selection_sort_with_index()
{
    int n, i, j, min_idx, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("\nSelection Sort Process:\n");
    
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        
        printf("Pass %d: Minimum element %d found at index %d\n", 
               i + 1, arr[min_idx], min_idx);
        
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    selection_sort_with_index();
    printf("\nBhawesh Panwar\n");
    return 0;
}
