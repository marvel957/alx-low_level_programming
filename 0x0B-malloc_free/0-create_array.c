#include "main.h"
#include <stdlib.h>
/**
 * create_array - name of function
 * @size: param 1.
 * @c: param 2.
 * Return: Null or a pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
