/**
 ============================================================================
 Name        : @file 		fahr2Celcius.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 1.5 The following is a function to print a Fahrenheit and Celcius Conversion Table
 ============================================================================
 */
#include <stdio.h>

/**
 * @brief The function for creating the conversion table
 * @return void the function returns nothing
 */
void fahr2Celcius(void){
	int celcius; 	/** stores celcius value. */

	printf("   Fahrenheit \t \t Celcius   ");
	printf("\n-----------------------------------------\n");
	for(int i =0; i<=300;i+=20){
		celcius  = 5*(i-32)/9 ; /**< The Temprature conversion formula */
		printf("\t %d \t \t %d \n",i,celcius);
	}

}
