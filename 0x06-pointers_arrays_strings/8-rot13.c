#include "holberton.h"
/**
 * rot13 - encoder.
 * @s: string.
 * Return: always 0.
 */
char *rot13(char *s)
{
	int a;
	char letters[27] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char digits[27] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] > 64 && s[a] < 91) || (s[a] > 96 && s[a] <  123))
		{
			s[a] = (s[a] - 65 > 25) ?
				digits[s[a] - 97] : letters[s[a] - 65];
		}
	}
	return (s);
}
