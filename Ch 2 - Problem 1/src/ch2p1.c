/*
 ============================================================================
 Name        : ch2p1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define DOLLAR_PER_MILE 0.35

int main(void) {

	float beginning_mileage = 0;
	float ending_mileage = 0;

	printf("MILEAGE REIMBURSEMENT CALCULATOR\nEnter beginning odometer reading=> ");
	fflush(stdout);
	scanf("%f", &beginning_mileage);

	printf("Enter ending odometer reading=> ");
	fflush(stdout);
	scanf("%f", &ending_mileage);

	float miles_traveled = ending_mileage - beginning_mileage;
	float reimbursement = miles_traveled * DOLLAR_PER_MILE;

	printf("You traveled %0.1f miles. ", miles_traveled);
	printf("At $%.2f per mile, your reimbursement is $%.2f.", DOLLAR_PER_MILE, reimbursement);
	return 0;
}
