//question 01
#include<stdio.h>

int main() {
	//weight less than 50, and height greator than 170cm.
	int boys_data[4][2] = {{45,180},{55,170},{60,120},{40,172}};
	int boys_count = 0;

	//looping the array
	for (int i = 0; i < 4; i++) {
        if (boys_data[i][0] < 50 && boys_data[i][1] > 170) {
            boys_count++;
        }
    }

	printf("Boys Count is :%d",boys_count);
	return 0;
}
