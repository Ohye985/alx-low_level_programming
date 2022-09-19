#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to one of the integers
 * @b: pointer to the other integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
