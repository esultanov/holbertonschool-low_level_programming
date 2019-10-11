#include <stdio.h>

/**
 * main - print largest prime number.
 * or last prime.
 * Return: return 0.
 */

int main(void)
{
	long int i = 612852475143;
	long int t;

	for (t = 2; t != i; t++)
	{
		if (i % t == 0)
		{
			i /= t;
		}
		continue;
	}
	printf("%ld\n", i);
	return (0);
}
