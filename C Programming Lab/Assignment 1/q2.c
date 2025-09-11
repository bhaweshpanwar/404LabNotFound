#include <stdio.h>
#define PI 3.14159

int main() {
    float radius = 53.79;
    float area;
    
    printf("Question 2 - Circle Area:\n");
    area = PI * radius * radius;
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n\n", area);
    
    return 0;
}