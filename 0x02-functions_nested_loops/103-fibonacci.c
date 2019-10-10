#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: return 0.
 */
int main(void)
{
	long f = 0;
	long i = 1;
	int c;

	for (c = 1; c <= 32; c++)
	{
		i = i + f;
		f = i - f;
		if (i % 2 != 0)
		{
			printf("%ld", i);
			{
				if (c < 31)
					printf(", ");
			}
		}
	}
	putchar('\n');
	return (0);
}
