#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: parameter 1
 * @b:parameter 2
 * Return:void return
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
