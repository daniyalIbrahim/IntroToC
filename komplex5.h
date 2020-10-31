/*! \addtogroup AufgabenKomplex5
 *  @file    komplex5.h
 *	@author  daniyal ibrahim
 *	@date    26.10.2020
 *	@brief   The Header file for AufgabenKomplex 5.
 * \details  This file holds the functions from the package "AufgabenKomplex5".
 *
 */
#ifndef KOMPLEX5_H_
#define KOMPLEX5_H_ "komplex5.h"

/*! \details Converts a Char variable into an equivalent int variable.
 *  \return	 This function returns int
 *  @param char ch, convert this char to an Integer
 *  @return integer, converted from char
 */
int simpleAtoi(char ch);

/*! \details This function takes an integer and inverts the bits of the integer at the given p index for the next n digits.
 *  \return	 This method returns no value
 *  @param unsigned int x, an integer x
 *  @param int p, start point to complement bits
 *  @param int n, number of bits to be complemented
 */
void invert(unsigned int x, int p, int n);

/*! \details This function takes variable number of integers and add them together.
 *  \return	 This method returns the integer
 *  @param	int sum, variadic parameter
 *  @return int , returns the sum of all given inputs
 */
int mySum(int num,...);

#endif /* KOMPLEX5_H_ */
