#include "main.h"
/**
 * _strpbrk - func name
 * @s: param 1.
 * @accept: param 2
 * Return: returns a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
