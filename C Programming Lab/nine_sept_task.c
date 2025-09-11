/*1.write a program to count the number of boys whose weight is less than 50 kg and height is greater than 170 cm.
2.write a program to counting the number of boys and girls in a class we use code = 1 or boy and code = 2 for a girl.
3. a commercial bank has introduced an incentive policy of giving bonus to all its deposit folders the policy is as follows a bonus of 2% of the balance held on 31st December is given to everyone, irrespective of their balance and 5% is given to female account holders if their balance is more than rupees 5000.
4. write a program of grading students in an academic institute, the grading is done according to the following rules.
5. */

//question 01
#include<stdio.h>

/*int main() {
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
}*/


//question 02
/*int main() {
    // girl and boy count 
    int data[10];

    printf("If you are a boy press 1 and girl press 2, then pass it to next person.\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter your input (%d/10): ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nEntered Data is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    int boy_count = 0, girl_count = 0;
    for (int i = 0; i < 10; i++) {
        if(data[i] == 1) 
        	boy_count++;
        else if(data[i] == 2)
        	girl_count++;
    }

    printf("Boys are:%d \n",boy_count);
    printf("Girls are:%d \n",girl_count);  
    return 0;
}*/


//question 3 - bank question
/*int main() {
    int code;    
    float balance;     
    float bonus = 0;

    printf("Enter account holder code (1=Male, 2=Female): ");
    scanf("%d", &code);

    printf("Enter account balance: ");
    scanf("%f", &balance);
  
    bonus = 0.02 * balance;

    if (code == 2 && balance > 5000) {
        bonus += 0.05 * balance;
    }

    printf("\nAccount Balance: %.2f\n", balance);
    printf("Bonus: %.2f\n", bonus);
    printf("Total with Bonus: %.2f\n", balance + bonus);

    return 0;
}*/

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


//question 05
// An electric power distribution company charges as follows:
// 0 – 200 units → ₹0.50 per unit
// 201 – 400 units → ₹100 + ₹0.65 per unit excess of 200
// 401 – 600 units → ₹230 + ₹0.80 per unit excess of 400
// 601 and above → ₹390 + ₹1.00 per unit excess of 600


int main() {
    int units;
    float charge = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        charge = units * 0.50;
    }
    else if (units <= 400) {
        charge = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600) {
        charge = 230 + (units - 400) * 0.80;
    }
    else {
        charge = 390 + (units - 600) * 1.00;
    }

    printf("Total electricity bill = Rs. %.2f\n", charge);

    return 0;
}
