/**
 * main - print sum of the nums.
 * Return: 0.
 */
#include <stdio.h>

int main(void)
{
	int i;
	int s = 0;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			s = s + i;
	}
	printf("%d\n", s);
	return (0);
}
