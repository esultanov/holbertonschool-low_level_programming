#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, d, k, w;

	for (i = '0'; i <= '9'; i++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (w = d + 1; w <= '9'; w++)
				{
					putchar(i);
					putchar(d);
					putchar(' ');
					putchar(k);
					putchar(w);
					if (i < '9' || d < '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
