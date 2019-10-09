#include "holberton.h"
/**
 * factorial - return factorial of given number.
 * @n: numbers.
 * Return: returns 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
