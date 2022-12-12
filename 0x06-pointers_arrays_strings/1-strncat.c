#include "main.h"
<<<<<<< HEAD
/**
 *_strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *  Return: A pointer to the resulting string dest
 */

=======

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
>>>>>>> 26dc947f748a8bbb4c629198e111ba9faeff7670
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
<<<<<<< HEAD
=======

>>>>>>> 26dc947f748a8bbb4c629198e111ba9faeff7670
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
<<<<<<< HEAD
	dest[dlen + n + 1] = '\0';
=======

	dest[dlen + n + 1] = '\0';

>>>>>>> 26dc947f748a8bbb4c629198e111ba9faeff7670
	return (dest);
}
