#include "main.h"
/**
 * _strncpy - func name
 * @dest: param 1
 * @n: param 2
 * @n: max bytes
 * @src: string from source
 * Return: returns a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, desti = 0;

	while (src[i++])
		desti++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = desti; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
