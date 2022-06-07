#include "main.h"

/**
 * _islower - This function will return a result.
 *
 * @c: Description of parameter c.
 * Return: 1 If alphabet is lower
 */
int _islower(int c)
{
	int result;

	if (c < 96)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}

	return (result);
}
