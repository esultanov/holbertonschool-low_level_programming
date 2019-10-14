#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply nums..
 * @argc: count.
 * @argv: arguments.
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int i, n, t;
	char *p;

	t = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				t += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", t);
	return (0);
}
