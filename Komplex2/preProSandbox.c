/**
 ============================================================================
 Name        : @file 		preProSandbox.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 2.2, 2.3, 2.5 ,2.6 Working with Macros and Preprocessor Commands
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

#define IS_EMPTY_STR(X) ( (1 / (sizeof(X[0]) == 1))/*type check*/ && !(X[0])/*content check*/)
#define NAME "ANTON"
#define MAX(a,b) ((a>b)?(a):(b))
#define SQUARE(x) (abs((x)*(x)))

/**
 * @brief The function for checking the value stored in a Macro
 * @return void the function returns nothing
 */
void runDisplay(void){
	if(!IS_EMPTY_STR(NAME)){
		printf("Ich bin %s's Program",NAME);
	}
	else{
		printf("Ich gehoere niemandem");
	}

}

/**
 * @brief The function for using the macros
 * @see 	MAX(a,b)
 * @see		SQUARE(x)
 * @param void
 * @return void the function returns nothing
 *
 */
void checkMacros(){
	int a=20,b=25,c=-35,d=40;
	int res_1,res_2,res_3,res_4,res_5;
	res_1=MAX(a,b);
	res_2=MAX(a+b,c+d);
	res_3=SQUARE(a);
	res_4=SQUARE(a+1);
	res_5=SQUARE(-a);
	printf("%d is bigger \n",res_1);
	printf("%d is bigger \n",res_2);
	printf("Square of %d is %d \n",a,res_3);
	printf("Square of %d+1 is %d \n",a,res_4);
	printf("Square of -%d is %d \n",a,res_5);
}

/**
 * The function which returns Modulus of a given integer or float
 * @param int a     The number for which the modulus is to be calculated
 * @param int *result_a the result for the number in integer
 * @param float b The number for which the modulus is to be calculated
 * @param float *result_b The result for the number in floating points
 * @return void the function returns nothing
 */
void calcModulus(int a, float b, int *result_a, float *result_b) {
   *result_a = abs(a);
   *result_b = fabs(b);
}
/**
 * @param float a first number to compare
 * @param float b second number to compare
 * @return void the function returns nothing
 *
 */
void findBigger(float a, float b){
    (a>b)? printf("%1.3f is bigger than %1.3f \n",a,b): printf("%1.3f is bigger than %1.3f\n",b,a);
}

