#include "main.h"

/**
 * swap_int- swaps between two numbers
 * @a: pointer obe
 * @b: pointer two
 * return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
