#include "main.h"

/**
 *  swap_int - function that that swaps the values of two integer
 * @a: The first character to enter the program
 * @b: The second character to enter the program
 *
 */

void swap_int(int *a, int *b)
{
	int swapping;
	
	swapping = *a;
	*a = *b;
	*b = swapping;
}
