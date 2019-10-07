#include "holberton.h"
/**
 * _memset - fills memory with const byte
 * @n: first bytes.
 * @s: pointed memory erea.
 * @b: const byte.
 * Return: pointer to the s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int test;

	for (test = 0; n > 0; n--, test++)
	{
		s[test] = b;
	}
	return (s);
}
