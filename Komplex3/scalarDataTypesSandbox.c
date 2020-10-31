/**
 ============================================================================
 Name        : @file 		scalarDataTypesSandbox.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 3.2,3.3,3.4 & 3.5 Scalar Data Types
 ============================================================================
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "../komplex3.h"
#include <string.h>


/**
 * The function to look up for address of char,short and float variables
 * @return void the function returns nothing
 * @param void
 */
void addressLookUp(void) {
	char a = 'a', b = 'g', c = 'z';
	short d = 3242, e = 8764, f = 62;
	float g = 45.345, h = -123.65, i = 324.23;

	printf("\n---------address of char variables-----------\n");
	printf("The address of %c is %p \n", a, (void*)&a);
	printf("The address of %c is %p \n", b, (void*)&b);
	printf("The address of %c is %p \n", c, (void*)&c);

	printf("\n--------address of short variables-----------\n");
	printf("The address of %d is %p \n", d, (void*)&d);
	printf("The address of %d is %p \n", e, (void*)&e);
	printf("The address of %d is %p \n", f, (void*)&f);

	printf("\n--------address of float variables------------\n");
	printf("The address of %f is %p \n", g, (void*)&g);
	printf("The address of %f is %p \n", h, (void*)&h);
	printf("The address of %f is %p \n", i, (void*)&i);

}
/**
 * @brief The function for printing out the limits of scalar data types
 * @return void the function returns nothing
 * @param void
 */
void checkDataTypes(void) {
	printf(
			"--------Table for MIN & MAX VALUES FOR SCALAR DATA TYPES-----------\n");
	printf("\t MAXIMUM \t MINIMUM \n");
	printf("-------------------------------------------\n");
	printf("INTEGER: %d \t  %d \n", INT_MAX, INT_MIN);
	printf("SHORT: \t %d \t \t  %d \n", SHRT_MAX, SHRT_MIN);
	printf("CHAR: \t %c \t \t  %c \n", CHAR_MAX, CHAR_MIN);

	printf("FLOAT PRECISION \t %d \n", FLT_MANT_DIG);
	printf("DOUBLE PRECISION\t %d \n", DBL_MANT_DIG);
	printf("LONG DOUBLE PRECISION\t %d \n", LDBL_MANT_DIG);

}

/**
 * The function for comparing two article structures for equality
 * @param article_t* one is the article pointer for first object
 * @param article_t* two is the article pointer for second object
 * @return returns sucess and faliure codes
 *
 */

int equal(article_t* one, article_t* two) {
	int x;
	x = ((one->number == two->number) && (one->page == two->page)) ? 1 : 0;
	if ((x == 1) && (strcmp(one->headline, two->headline) == 0)){
		printf("\n two and one are same\n\n");
		return 1;
	} else {
		printf("\n two and one are different\n\n");
		return 0;
	}
}

/**
 * The function for printing out non initialized integers
 * @param void
 * @return void
 */
void emptyIntValues(void){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	printf("Printing out 15 Empty Integers \n ");
	printf("A: %d, B: %d, C: %d, D: %d, E: %d, F: %d, G: %d \n",a,b,c,d,e,f,g);
	printf("H: %d, I: %d, J: %d, K: %d, L: %d, M: %d, N: %d, O: %d \n",h,i,j,k,l,m,n,o);
	/**
	 * Random numbers are assigned to each non initialized integer variables at runtime
	 */
}
