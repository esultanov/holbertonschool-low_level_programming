#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, d;

	for (i = '0'; i <= '9'; i++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			putchar(i);
			putchar(d);
			if (i < '9' || d < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
