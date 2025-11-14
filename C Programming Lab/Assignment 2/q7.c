#include<stdio.h>

int main() {
	int i, sum = 0, count = 0;

	for(i = 101; i < 200; i++) {
		if(i % 7 == 0) {
			count++;
			sum = sum + i;
		}
	}

	printf("Total numbers divisible by 7 between 100 and 200 = %d\n", count);
    printf("Sum of these numbers = %d\n", sum);
	return 0;
}