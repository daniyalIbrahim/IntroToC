/*!
 ============================================================================
 Name        : @file 		convert2Dual.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief		Aufgabe 1.4 The following is a function to convert decimal number into binary
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define error(message) { printf("Error %s!" , message); \
							exit(-1); }

/**
 * @brief The function for decimal to binary conversion
 * @return void the function returns nothing
 */
void convert2Dual() {
	long decimal, tempDecimal; /** stores decimal before conversion. */
	char binary[65]; /** a char array to store the binary digits. */
	int index = 0; /** an index for the char array. */

	/**
	 * Reads decimal number from user
	 */
	printf("Enter any decimal value : ");
	if (scanf("%ld", &decimal) != 0) {
		tempDecimal = decimal;
	} else {
		error("the number entered is not a decimal");
	}
	/** Copies decimal value to temp variable */

	while (tempDecimal != 0) {
		/** Finds decimal%2 and adds to the binary value */
		binary[index] = (tempDecimal % 2) + '0';

		tempDecimal /= 2;
		index++;
	}
	/**
	 * a char array can use string functionality if the last index is set like this
	 */
	binary[index] = '\0';

	/**
	 *  The final outcome is printed on the console
	 */
	printf("The number %ld in binary system is %s", decimal, binary);

}
