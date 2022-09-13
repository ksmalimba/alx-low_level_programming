#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char str_s[8] = "_putchar";

	while (n < 9)
	{
		_putchar(str_s[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
