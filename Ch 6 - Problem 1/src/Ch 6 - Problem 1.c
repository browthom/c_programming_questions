/*
 ============================================================================
 Name        : Ch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void determine_bills(int dollar_amount,
				     int *number_of_50s,
					 int *number_of_20s,
					 int *number_of_10s) {

	int remaining_amount = dollar_amount;

	if (dollar_amount % 10 == 0) {
		// Calculate the number of bills for each
		*number_of_50s = dollar_amount / 50;
		remaining_amount = remaining_amount - (*number_of_50s * 50);
		*number_of_20s = remaining_amount / 20;
		remaining_amount = remaining_amount - (*number_of_20s * 20);
		*number_of_10s = remaining_amount / 10;

	}
}

int main(void) {

	int money = 0;
	int error = 0;

	int number_of_50s = 0,
		number_of_20s = 0,
		number_of_10s = 0;

	do {
		printf("Enter Amount Desired in Multiples of $10 => ");
		fflush(stdout);

		scanf("%d", &money);

		// Ensure that the number entered by the user
		// is actually divisible by $10
		if (money % 10 != 0) {
			error = 1;
			printf("Invalid Dollar Amount.\n");
		} else {
			error = 0;
		}

	// Continue until user has entered a valid amount
	} while (error);

	determine_bills(money, &number_of_50s, &number_of_20s, &number_of_10s);

	// Print the number of bills
	printf("Number of $50 bills: %d\n", number_of_50s);
	printf("Number of $20 bills: %d\n", number_of_20s);
	printf("Number of $10 bills: %d\n", number_of_10s);

	return 0;
}
