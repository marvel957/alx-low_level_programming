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

	me = malloc(b);

	if (me == NULL)
		exit(98);
	return (me);
}
