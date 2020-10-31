/**
 ============================================================================
 Name        : @file 		matrix2.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 4.4 Working with 2D Matrices
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define NUM_ROWS 4
#define NUM_COL  5

/**
 * @brief The function which prints out the Matrice
 * @param 2D float array
 * @return exit code is returned
 */
int printMatrix(float Floatarr[NUM_ROWS][NUM_COL]) {
	int i,j;
	/**
	 * Two for loops with Big O(n^2)
	 * two nested loops for 2D arrays
	 */
	printf("Matrix:\n");
	for (i = 0; i < NUM_ROWS; i++) {
		for (j = 0; j < NUM_COL; j++) {
			printf("%1.2f \t", Floatarr[i][j]);

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}

