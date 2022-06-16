#include "main.h"

/**
 * _strcmp - func name
 * @s1: pointer1 as param
 * @s2: pointer 2 as param
 * Return: whatever.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
