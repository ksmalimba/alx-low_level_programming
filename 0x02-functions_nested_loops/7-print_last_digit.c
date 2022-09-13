#include "main.h"

/**
 *  print_last_digit - function that prints the last digit of a number.
 *  @y: The input number to check
 *   Return: int.
 */
int print_last_digit(int y)
{
	y %= 10;
	if (y < 0)
		y *= -1;
	_putchar(y + '0');
	return (x);
}
