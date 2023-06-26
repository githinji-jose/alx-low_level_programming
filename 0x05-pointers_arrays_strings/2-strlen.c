#include "main.h"

/**
 * _strlen - checks string legth
 * @s: string
 * return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
