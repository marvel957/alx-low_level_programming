#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lower case;
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\');

	return (0);
}


