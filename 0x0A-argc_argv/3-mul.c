#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies
 * @argc: number of command
 * @argv: array that contains the
 * Return: 0 - value
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
