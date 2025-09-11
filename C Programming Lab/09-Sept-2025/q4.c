#include<stdio.h>

//question 04
int main() {
	int score;
	printf("Enter Your Score :");
	scanf("%d",&score);

	if(score > 100) {
		printf("\n Please Enter Correct Score");
	}
	else {
		if(score >=80 && score <= 100) 
		printf("\n Grade: Honours");
		else if(score >=60 && score <= 79) 
		printf("\n Grade: First");
		else if(score >=50 && score <=59)
		printf("\n Grade: Second");
		else if(score >=40 && score <=49)
		printf("\n Grade: Third");
		else if(score >= 0 && score <=39)
		printf("\n Grade: Fail");
	}

	return 0;
}