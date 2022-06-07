#include "main.h"


/**
 * main - This fuction print alphabet 10 times.
 *
 * Return: will alwats be 0.
 */
int main(void)
{
	char letter;
	int i;

	i = 0;

	while (i < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		putchar('\n');
		i++;
	}
	return (0);
}
