#include "main.h"

/**
 * _strcpy - function name
 * @dest: A buffer
 * @src: A source string
 * Return: A pointer
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
