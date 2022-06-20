#include "main.h"
/**
 * _memcpy - fumc name..
 * @dest: param 1
 * @src: param 2
 * @n: param 3.
 * Return: the return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *desti = dest;
	unsigned int i;
	char *sour = src;

	for (i = 0; i < n; i++)
		desti[i] = sour[i];
	return (dest);
}

