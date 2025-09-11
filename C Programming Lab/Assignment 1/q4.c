#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 67, num2 = 76;
    printf("Question 4 - Add and Subtract Functions:\n");
    printf("%d+%d=%d\n", num1, num2, add(num1, num2));
    printf("%d-%d=%d\n\n", num1, num2, sub(num1, num2));
    
    return 0;
}