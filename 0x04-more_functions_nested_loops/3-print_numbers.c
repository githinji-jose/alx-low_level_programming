#include "main.h"

/**
 * print_numbers - prints numbers 
 * return:0
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;

	}
	_putchar('\n'); 
}
