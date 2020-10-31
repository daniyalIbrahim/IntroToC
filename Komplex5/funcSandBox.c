/**
 ============================================================================
 Name        : @file funcSandBox.c
 Author      : @author daniyal ibrahim
 Version     : @version 1.0
 Description : @brief Aufgabe 5.4 function with variadic parameter
 ============================================================================
 */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * The function which takes in variable input of integers
 * @param int arg_count the accessor for all variables
 * @param ... this function takes more than one variable in parameter
 * @return the integer value is returned
 */
int mySum(int num, ...) {

	int nSum = 0;
	va_list intArgumentPointer;
	va_start(intArgumentPointer, num);
	for (int i = 0; i < num; i++)
		nSum += va_arg(intArgumentPointer, int);
	va_end(intArgumentPointer);

	return nSum;
}

