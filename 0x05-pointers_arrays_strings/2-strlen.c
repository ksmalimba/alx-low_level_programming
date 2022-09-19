#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to an string
 *Return: int
 */

int _strlen(char *s)
{
	int icount = 0;

	while (s[icount] != '\0')
	{
		icount += 1;
	}
	return (icount);
}
