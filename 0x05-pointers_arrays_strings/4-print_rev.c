#include "main.h"

/**
 * print_rev - prints characters in reverse
 * @s: pointer of string to prints
 * return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n')
}
