#include "holberton.h"
/**
 * _sqrt_recursion - return power of given number.
 * @n: value.
 * Return: returns 0.
 */

int _sqrt_recursion(int n)
{
	return (findsqr(n, 1));
}
/**
 * findsqr - second function which finds square.
 * @y: from n.
 * @x: 1.
 * Return: sqr.
 */
int findsqr(int y, int x)
{
	int kv;

	kv = x * x;
	if (kv == y)
		return (x);
	else if (kv < y)
		return (findsqr(y, x + 1));
	else
		return (-1);
}
