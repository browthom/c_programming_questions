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

#define GRAVITY 9.8 // m/s^2
#define EFF 0.9 	// Efficiency

int main(void) {

	float height = 0;
	float water_volume = 0;

	printf("Height of Dam: ");
	fflush(stdout);
	scanf("%f", &height);
	printf("Volume of water per second: ");
	fflush(stdout);
	scanf("%f", &water_volume);

	float power = EFF * 1000 * water_volume * GRAVITY * height * (0.000001);

	printf("Amount of power the Dam would produce: %.2fMW", power);

	return 0;
}
