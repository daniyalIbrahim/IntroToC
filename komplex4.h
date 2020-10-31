/*! \addtogroup AufgabenKomplex4
 *  @file    komplex4.h
 *	@author  daniyal ibrahim
 *	@date    26.10.2020
 *	@brief   The Header file for AufgabenKomplex 4.
 * \details This file holds the functions from the package "AufgabenKomplex4".
 *
 */
#ifndef KOMPLEX4_H_
#define KOMPLEX4_H_ "komplex4.h"
#define error(message) { printf("Error %s!" , message); exit(-1);}

/*! \details This structure holds employee object for the linked list (4.3).
 */
typedef struct Employee{ char name[41];int pID;float salary;}emplInfo;

/*! \details This function is written to swap the two integers .
 *  \return	 void
 */
void swapInt(int a, int b);

/*! \details structure of a Node, which itself is a component of our Linked List.*/
typedef struct node Node;

/*! \details structure of a Linked List.*/
typedef struct list List;

/*! \details This function creates a Linked List.
 *  \return	 This method returns List*
 */
List * makelist();

/*! \details This function adds employee data to the linked list.
 *  \return	 void
 */
void add(emplInfo data, List * list);

/*! \details This function removes a node from linked list using the employee ID.
 *  \return	 void
 */
void delete(emplInfo data, List * list);

/*! \details This function prints out a Linked List.
 *  \return	 void
 */
void display(List * list);

/*! \details This function deletes the whole linked list.
 *  \return	 void
 */
void destroy(List * list);

/*! \details This function prints out a multi dimensional matrix.
 *  \return	 This method doesn't returns an exit code
 */
int printMatrix( float Floatarr[4][5]);

#endif /* KOMPLEX4_H_ */
