#include "holberton.h"
/**
 * rot13 - encoder.
 * @s: string.
 * Return: always 0.
 */
char *rot13(char *s)
{
	int a = 0, b;
	char let[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dig[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[a] != '\0')
	{
		for (b = 0; b < 52;)
		{
			if (s[a] == let[b])
			{
				s[a] = dig[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}
