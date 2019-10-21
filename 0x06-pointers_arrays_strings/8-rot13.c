#include "holberton.h"
/**
 * rot13 - encoder.
 * @str: string.
 * Return: always 0.
 */
char *rot13(char *)
{
	int a;
	char letters[11] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char digits[11] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((str[a] > 64 && str[a] < 91 || str[a] > 96 && str[a] < 123))
		{
			str[a] = (str[a] - 65 > 25) ?
				digits[str[a] - 97] : letters[str[a] - 65];
		}
	}
	return (str);
}
