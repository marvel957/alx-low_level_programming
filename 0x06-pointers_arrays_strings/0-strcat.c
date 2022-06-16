#include "main.h"
/**
 * _strcat - a func that concatenates string
 * @dest: pointer 1
 * @src: pointer 2
 * Return: a pointer too
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, desti = 0;

	while (dest[i++])
		desti++;
	for (i = 0; src[i]; i++)
		dest[desti++] = src[i];
	return (dest);
}

