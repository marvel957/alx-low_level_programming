#include "main.h"
/**
 * _memset - function name
 * @s: param 1
 * @b: param 2
 * @n: param 3
 * Return: returns a value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, val = b;

	for (i = 0; i < n; i++)
		memory[i] = val;
	return (memory);
}
