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

	for (c = 1; c <= 50; c++)
	{
		i = i + f;
		f = i - f;
		printf("%ld", i);
		if (c < 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
