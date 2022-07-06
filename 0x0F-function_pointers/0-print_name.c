#include "function_pointers.h"
/**
 * print_name - func name
 * @name: param 1
 * @f: param 2
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
