#include<stdio.h>
int main() {
    int num, count = 1;

    read:
        printf("Enter number %d: ", count);
        scanf("%d", &num);
        printf("Square = %d\n", num * num);
        count++;

    if(count <= 5)
        goto read;
    else
        printf("Done with 5 numbers\n");

    return 0;
}
