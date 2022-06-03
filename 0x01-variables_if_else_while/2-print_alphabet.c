#include <stdio.h>

/**
 * main - prints the lower alpha
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

