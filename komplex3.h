/*! \addtogroup AufgabenKomplex3
 *  @file    komplex3.h
 *	@author  daniyal ibrahim
 *	@date    26.10.2020
 *	@brief   The Header file for AufgabenKomplex 3.
 * \details This file holds the functions from the package "AufgabenKomplex3".
 *
 */
#ifndef KOMPLEX3_H_
#define KOMPLEX3_H_ "komplex3.h"

/*! \details The struct Article is defined in the header file.*/
typedef struct article {char headline[30];int page;int number;} article_t;

/*! \details This function prints a table about the limits of scalar data types.
 *  \return	 This method doesn't return anything
 */
void checkDataTypes(void);

/*! \details This function prints the addresses of short,float,int variables
 *  \return	 This method doesn't return anything
 */
void addressLookUp(void);

/*! \details This function compares two article_t struct for similarity.
 *  \return	 This method returns exit codes for SUCCESS and FAILURE
 */
int equal(article_t* one,article_t* two);

/*! \details This function prints 15 non initialized integers.
 *  \return	 This method doesn't return anything
 */
void emptyIntValues(void);

#endif /* KOMPLEX3_H_ */
