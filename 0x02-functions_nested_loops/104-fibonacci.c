#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: return 0.
 */
int main(void)
{
	unsigned long f = 0;
	unsigned long i = 1;
	int c;

	for (c = 1; c <= 98; c++)
	{
		i = i + f;
		f = i - f;
		printf("%lu", i);
		if (c < 98)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
