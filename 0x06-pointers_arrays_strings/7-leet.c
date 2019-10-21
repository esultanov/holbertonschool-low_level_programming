#include "holberton.h"
/**
 * leet - elite.
 * @str: string.
 * Return: always 0.
 */
char *leet(char *str)
{
	int a, b;
	char letters[11] = "aAeEoOtTlL";
	char digits[11] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (letters[b] == str[a])
				str[a] = digits[b];
		}
	}
	return (str);
}
