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
