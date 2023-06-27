#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: chqr type
 * @src: char type string
 * return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
