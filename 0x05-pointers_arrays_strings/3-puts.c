#include "main.h"

/**
 * _puts - name
 * @str: param
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
