#include<stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Question 6 - Temperature Conversion:\n");
    
    // Celsius to Fahrenheit
    celsius = 29.0;
    fahrenheit = (9.0 * celsius / 5.0) + 32;
    printf("(a) %.2fC = %.2fF\n", celsius, fahrenheit);
    
    // Fahrenheit to Celsius
    fahrenheit = 98.0;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("(b) %.2fF = %.2fC\n\n", fahrenheit, celsius);
    return 0;
}