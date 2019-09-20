#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, d, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			for (k = d + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(d);
				putchar(k);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
