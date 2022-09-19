#include "main.h"

/**
 * puts_half - prints half of string
 * @str: pointer to char
 * Return : does not return anything
 */

void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
		i += 1;
	x = i / 2;
	if (i % 2 == 1)
		x += 1;
	while (str[x] != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
