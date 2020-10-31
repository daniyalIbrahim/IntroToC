/**
 ============================================================================
 Name        : @file 		bitByBit.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 5.2 & 5.3 Bit Operations
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define BIT(x,y) (y<<(x))
/**
 * The function for converting a char variable into int variable
 * @param char c
 * @return the integer value is returned
 */
int simpleAtoi(char ch){
	int num = 0;
	/**Substract '0' from entered char to get corresponding digit*/
	num = ch - '0';
	return num;
}

/**
 * The function for inverting the bits of a given decimal number, starting from the p digit for n numbers
 * @param unsigned int x the decimal number
 * @param int p the start bit which is to be inverted
 * @param int n the number of bits to be changed
 * @return the integer value is returned
 */
void invert(unsigned int x, int p, int n){
	int i =0;
	for(;i<=n;i++){
		x &= ~BIT(p,p+i);
	}
	printf("Starting from the index %d the next %d bits are complemented \nThe number now is %d",p,n,x);
}
