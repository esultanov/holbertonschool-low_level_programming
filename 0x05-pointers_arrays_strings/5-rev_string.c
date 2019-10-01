#include "holberton.h"
/**
 * rev_string - reverse.
 * @s: an integer from main.c.
 * Return: returns 0.
 */
void rev_string(char *s)
{
	int i, r, l;
	char rev;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, r = 0; r < l / 2; i--, r++)
	{
		rev = s[r];
		s[r] = s[i];
		s[i] = rev;
	}
}
