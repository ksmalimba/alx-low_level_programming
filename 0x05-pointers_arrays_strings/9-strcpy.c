#include "main.h"

/**
 * _strcpy - function  copies the string
 * @sdes: pointer to the char
 * @src: pointer tosource of char
 *
 * Return: cinnnrip
 */

char *_strcpy(char *sdes, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(sdes + i) = *(src + i);
	}
	*(sdes + i) = '\0';
	return (sdes);
}
