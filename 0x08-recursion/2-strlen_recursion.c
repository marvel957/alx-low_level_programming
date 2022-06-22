#include "main.h"
/**
 * _strlen_recursion - func name
 * @s: string name
 * Return: name of str
 */
int _strlen_recursion(char *s)
{
	int le = 0;

	if (*s)
	{
		le++;
		le += _strlen_recursion(s + 1);
	}
	return (len);
}
