#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - func name.
 * @b: param
 * Return: returns a pointee
 */
void *malloc_checked(unsigned int b)
{
	void *me;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
