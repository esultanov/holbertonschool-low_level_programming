#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: count of arguments.
 * @av: pointer to arguments.
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, n, m, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
			k++;
		k++;
	}
	str = malloc(k * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++, i++)
		{
			str[i] = av[n][m];
		}
		str[i] = '\n';
		i++;
	}
	return (str);
}
