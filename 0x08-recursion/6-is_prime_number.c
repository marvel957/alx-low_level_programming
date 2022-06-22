#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 * is_divisible - fumc 1
 * @num: param
 * @div: param
 * Return: return value
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - func 2.
 * @n: param
 * Return: a value.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
