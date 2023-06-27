#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: int type array pointer
 * @n: intvtype integer
 * return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
