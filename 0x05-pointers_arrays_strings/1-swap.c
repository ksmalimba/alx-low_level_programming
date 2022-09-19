#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *@x: pointer to an int
 *  @y: pointer to other int
 * Return: nothing
 */

void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
