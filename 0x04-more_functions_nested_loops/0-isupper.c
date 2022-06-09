#include "main.h"
/**
 * _isupper - This function will return
 *
 * @c: Description of parameter
 * Return: 1 If alphabet is lower
 */
int _isupper(int c)
{
	int result;

	if ((c >= 'A') && (c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
