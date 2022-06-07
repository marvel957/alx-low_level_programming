#include "main.h"

/**
 * print_alphabet - it prints the alphabet..
 *
 * Return : This returns 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
