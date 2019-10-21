#include "holberton.h"
/**
 * cap_string - low 2 uppercase.
 * @str: string.
 * Return: always 0.
 */
char *cap_string(char *str)
{
	int a, b;
	char exp[] = " \t\n,;.!?\"(){}";

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	for (a = 1; str[a] != '\0'; a++)
	{
		for (b = 0; exp[b] != '\0'; b++)
		{
			if (exp[b] == str[a])
			{
				if (str[a + 1] > 96 && str[a + 1] < 123)
					str[a + 1] -= 32;
			}
			else
				continue;
		}
	}
	return (str);
}
