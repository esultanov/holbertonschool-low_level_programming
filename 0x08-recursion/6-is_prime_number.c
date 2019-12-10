#include "holberton.h"
/**
 * prime_helper - prime num checker
 * @num: number
 * @div: divider
 * Return: square root
 */

int prime_helper(int num, int div)
{
	if (div == num)
		return (1);
	else if (num % div == 0)
		return (0);
	return (prime_helper(num, ++div));
}

/**
 * is_prime_number - prime recursively check
 * @n: number
 * Return: 1 if n is prime. else returns 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	else
		return (prime_helper(n, div));
}
