#include "main.h"

/**
 * print_array - prints element of an array
 * @a: pointer 
 * @s: pointer
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
