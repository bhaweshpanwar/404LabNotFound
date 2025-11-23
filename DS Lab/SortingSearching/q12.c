#include<stdio.h>
void binary_search_main()
{
    int n, i, key, low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
        {
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    if (!found)
        printf("Element %d not found in array\n", key);
}

int main()
{
    binary_search_main();
    printf("\nBhawesh Panwar\n");
    return 0;
}
