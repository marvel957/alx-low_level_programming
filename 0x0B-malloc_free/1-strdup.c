#include "main.h"
#include <stdlib.h>
/**
 * _strdup - func name
 * @str: string parameter.
 * Return: pointer or Null
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		length++;
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	return (duplicate);
}
