#include "main.h"


/**
 * print_alphabet_x10 - This fuction print alphabet 10 times.
 *
 * Return: will alwats be 0.
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		i++;
	}
	return (0);
}
