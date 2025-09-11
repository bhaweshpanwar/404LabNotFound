#include <stdio.h>

int main() {
    printf("Bhawesh Panwar\n");
    printf("229, B Sudama Nagar\n");
    printf("Madhya Pradesh, 452009\n");
    return 0;
}

//
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius = 5.0; 
    float area = PI * radius * radius;

    printf("Radius = %f\n", radius);
    printf("Area of Circle = %f\n", area);

    return 0;
}

//
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int main() {
    int a = 20, b = 10;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    return 0;
}

//
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

//
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius / 5) + 32;
    printf("%f Fahrenheit\n",fahrenheit);

    // Convert Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (5 * (fahrenheit - 32)) / 9;
    printf("%f Celsius\n", fahrenheit, celsius);

    return 0;
}
