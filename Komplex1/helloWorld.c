/**
 ============================================================================
 Name        : @file 		helloWorld.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 1.2 The following is a function to print a Hello World String
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define error(message) { printf("Error %s!" , message); \
							exit(-1); }
/**
 * @brief The function for printing out a string
 * @return void the function returns SUCCESS and FAILURE exit codes
 */
int hello(void){
	char str[35];  /** stores value for a string. */
	printf("\nHello World!\n");

	printf("Enter your name: ");
	if(scanf("%s", str)!=1){
		return EXIT_FAILURE;
	}
	printf("Hello %s!\n",str);
	return EXIT_SUCCESS;
}
