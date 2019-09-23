#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, d;

	for (i = 0; i <= 99; i++)
	{
		for (d = 0; d <= 99; d++)
		{
			if (i < d && i != d)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(32);
				putchar(d / 10 + '0');
				putchar(d % 10 + '0');
				if (i != 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
