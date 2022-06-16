#include "main.h"
/**
 * _strncat - concatenate strings
 * @dest: param 1
 * @src: pqram 2
 * @n:number of bytes
 * Return: returns a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, desti = 0;

	while (dest[i++])
		desti++;
	for (i = 0; src[i] && i < n; x++)
		dest[desti++] = src[i];
	return (dest);
}
