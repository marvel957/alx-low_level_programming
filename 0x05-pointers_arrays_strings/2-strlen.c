#imclude "main.h"

/**
 * _strlen-function name
 * @s:parameter
 * Return: Rubish
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}

