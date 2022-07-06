#include "function_pointers.h"
/**
 * array_iterator - func name
 * @array: param 1
 * @size: param 2
 * @action: param 3
 * Return: no vale
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
