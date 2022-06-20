#include "main.h"


/**
 * _strchr - func name
 * @s: param 1
 * @c: param 2.
 * Return: return a value
 */
char *_strchr(char *s, char c)
{
	int i;


	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
