#include "main.h"
/**
 * _isalpha - a fumction tha check for alphabet.
 * @c: single letter imput
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}
