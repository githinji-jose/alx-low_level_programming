#include "main.h"

/**
 * _puts - prints string, followed by a new line
 * @str: pointer for string to print
 * return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (s[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
