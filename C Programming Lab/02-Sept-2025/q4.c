#include <stdio.h>

int main() {
    int a, b, c;
    float x;

    // First set
    a = 250; b = 35; c = 25;
    x = a /(b - c);
    printf("For a=250, b=35, c=25 => x = %.2f\n", x);

    // Second set
    a = 300; b = 70; c = 70;
    x = a / (b - c);
    printf("For a=300, b=70, c=70 => x = %.2f\n", x);

    return 0;
}