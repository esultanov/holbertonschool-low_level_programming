#include "holberton.h"
/**
 * leet - elite.
 * @str: string.
 * Return: always 0.
 */
char *leet(char *str)
{
	int a, b;
	char l[11] = "aAeEoOtTlL";
	char d[11] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (l[b] == str[a])
			       str[a] = d[b];
		}
	}
	return (str);
}
