#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: return 0.
 */
int main(void)
{
	long d = 0;
	long f = 0;
	long i = 1;
	int c;

	for (c = 1; c <= 31; c++)
	{
		i = i + f;
		f = i - f;
		if (i % 2 != 0)
		{
			d = d + i;
		}

	}
	printf("%ld", d);
	putchar('\n');
	return (0);
}
