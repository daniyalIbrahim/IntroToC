/**
 ============================================================================
 Name        : @file 		main.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		AufgabenKomplex 1-5
 ============================================================================
 */
/*! \mainpage Introduction to C Language
 *	<ul>
 *		<li>AufgabenKomplex 1  <b>1.2,1.3,1.4,1.5</b></li>
 *		<li>AufgabenKomplex 2 <b>2.2,2.3,2.5,2.6</b></li>
 *		<li>AufgabenKomplex 3 <b>3.2,3.3,3.4,3.5</b></li>
 *		<li>AufgabenKomplex 4 <b>4.2,4.3,4.4</b></li>
 *		<li>AufgabenKomplex 5 <b>5.2,5.3,5.4</b></li>
 *		<li>AufgabenKomplex 6 <b>6.1,6.2,6.3</b></li>
 *	</ul>
 */
#include <stdio.h>
#include <stdlib.h>
#include "komplex1.h"
#include "komplex2.h"
#include "komplex3.h"
#include "komplex4.h"
#include "komplex5.h"
#include "./AufgabenKomplex2/max.h"
#include "string.h"

/**
 * The main function to execute the program
 * @param void
 * return int
 */
int main(void) {

	printf("\n__________________________Aufgaben Komplex 1_________________________________\n");
	printf("\n-----------------Aufgabe 1.2--------------------\n");
	hello();

	printf("\n-----------------Aufgabe 1.3--------------------\n");
	just4Fun();

	printf("\n-----------------Aufgabe 1.4--------------------\n");
	convert2Dual();

	printf("\n-----------------Aufgabe 1.5--------------------\n");
	fahr2Celcius();

	printf("\n__________________________Aufgaben Komplex 2_________________________________\n");
	printf("\n-----------------Aufgabe 2.2--------------------\n");
	float a;
	float b;
	printf("Please enter a float number:");
	if (scanf("%f", &a) != 1) {
		printf("Error due to input");
		return EXIT_FAILURE;
	}
	printf("Please enter another float number:");
	if (scanf("%f", &b) != 1) {
		printf("Error due to input");
		return EXIT_FAILURE;
	}

	findBigger(a, b);

	printf("\n-----------------Aufgabe 2.3--------------------\n");
	runDisplay();

	printf("\n-----------------Aufgabe 2.5--------------------\n");
	float temp_a = -76.54, res_a;
	int temp_b = -543, res_b;
	calcModulus(temp_b, temp_a, &res_b, &res_a);
	printf(" Modulus of |%d|  is  %d \n Modulus of |%f| is %f \n", temp_b,
			res_b, temp_a, res_a);

	printf("\n-----------------Aufgabe 2.6--------------------\n");
	checkMacros();

	printf(
			"\n__________________________Aufgaben Komplex 3_________________________________\n");
	printf("\n-----------------Aufgabe 3.2--------------------\n");
	addressLookUp();

	printf("\n-----------------Aufgabe 3.3--------------------\n");
	checkDataTypes();
	printf("\n-----------------Aufgabe 3.4--------------------\n");
	emptyIntValues();

	printf("\n-----------------Aufgabe 3.5--------------------\n");
	article_t * art1 = malloc(sizeof(article_t));
	article_t * art2 = malloc(sizeof(article_t));
	article_t * art3 = malloc(sizeof(article_t));
	strcpy(art1->headline,"Die Schlagzeile schlechthin");
	strcpy(art2->headline,"Die Schlagzeile schlechthin");
	strcpy(art3->headline,"Die Schlagzeile_schlechthin");
	art1->number=33;
	art2->number=33;
	art3->number=33;
	art1->page=244;
	art2->page=244;
	art3->page=244;

	equal(art1, art2);
	equal(art2, art3);
	free(art1);
	free(art2);
	free(art3);

	printf(
			"\n__________________________Aufgaben Komplex 4_________________________________\n");
	printf("\n-----------------Aufgabe 4.2--------------------\n");
	int firstInt = 34;
	int secondInt = 23;
	swapInt(firstInt, secondInt);

	printf("\n-----------------Aufgabe 4.3--------------------\n");
	emplInfo data;
	List * list = makelist();

	strcpy(data.name, "MAX MUSTERMANN");
	data.pID = 2123;
	data.salary = 12.56;
	add(data, list);
	add(data, list);
	display(list);
	printf("\nDELETED\n");
	delete(data, list);
	printf("\nNEW LIST\n");
	display(list);
	printf("\n-----------------Aufgabe 4.4--------------------\n");
	float myMatrix[4][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12,
			13, 14, 15 }, { 16, 17, 18, 19, 20 } };
	printMatrix(myMatrix);

	printf(
			"\n__________________________Aufgaben Komplex 5_________________________________\n");

	printf("\n-----------------Aufgabe 5.2--------------------\n");
	printf("%d\n", mySum(1,2,3,4,5));

	printf("\n-----------------Aufgabe 5.3--------------------\n");
	char alpha = 'a';
	printf("The Char %c is converted to %d", alpha, simpleAtoi(alpha));

	printf("\n-----------------Aufgabe 5.4--------------------\n");
	invert(200, 2, 5);

	return 0;
}
