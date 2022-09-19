#include "main.h"

/**
 * _puts -prints a string
 * @str: a pointer to a char
 * Return: Nothing
 */

void _puts(char *str)
{
	icount = 0;

	while (str[icount] != '\0')
	{
		_putchar(str[icount]);
		icount += 1;
	}
	_putchar('\n');
}
