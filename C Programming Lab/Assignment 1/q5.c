#include<stdio.h>

int main() {
    float a, b, c, x;
    
    printf("Question 5 - Computing x = a/(b-c):\n");
    
    // Case (a)
    a = 250; b = 85; c = 25;
    if(b - c != 0) {
        x = a / (b - c);
        printf("(a) a=%.0f, b=%.0f, c=%.0f: x = %.2f\n", a, b, c, x);
    }
    
    // Case (b)
    a = 300; b = 70; c = 70;
    if(b - c != 0) {
        x = a / (b - c);
        printf("(b) a=%.0f, b=%.0f, c=%.0f: x = %.2f\n", a, b, c, x);
    } else {
        printf("(b) a=%.0f, b=%.0f, c=%.0f: Error - Division by zero!\n", a, b, c);
    }
   
    
    return 0;
}