#include "main.h"
/**
 * _print_rev_recursion - func name
 * @s: param 1
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
