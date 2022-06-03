#include <stdio.h>

/**
 * main - Prints lower case.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\');

	return (0);
}
