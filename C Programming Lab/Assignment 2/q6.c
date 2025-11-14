// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         printf("NUMBER IS EVEN\n");

//     if (num % 2 != 0)
//         printf("NUMBER IS ODD\n");

//     return 0;
// }




#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("NUMBER IS EVEN\n");
    if(n % 2 != 0)
        printf("NUMBER IS ODD\n");

    return 0;
}
