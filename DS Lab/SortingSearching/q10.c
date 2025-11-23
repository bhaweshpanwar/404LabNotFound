#include <stdio.h>
void linear_search_main()
{
    int n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    
    if (!found)
        printf("Element %d not found in array\n", key);
}
int main()
{
    linear_search_main();
    printf("\nBhawesh Panwar\n");
    return 0;
}