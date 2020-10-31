/**
 ============================================================================
 Name        : @file 		callByRef.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 4.2 swap two integers (Call By Reference)
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * The function which can swap two variables
 * @param int a the first integer to be swapped
 * @param int b the second integer to be swapped
 * @return void nothing
 */

void swapInt(int a,int b){
	int x;
	printf("The integers before swap\n");
	printf("first parameter: %d \t second parameter: %d \n",a,b);
	x=a;
	a=b;
	b=x;
	printf("The integers are swapped\n");
	printf("first parameter: %d \t second parameter: %d \n",a,b);
}
