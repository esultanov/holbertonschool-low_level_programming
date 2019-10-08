#include "holberton.h"
/**
 * _strpbrk - gets lenght of str.
 * @s: return number of bytes from s.
 * @accept: bytes consist.
 * Return: pointer to char.
 */

char *_strpbrk(char *s, char *accept)
{
	int sc;
	int ac;
	char *p;

	for (sc = 0; s[sc] != '\0'; sc++)
	{
		for (ac = 0; accept[ac] != '\0'; ac++)
		{
			if (s[sc] == accept[ac])
			{
				p = &s[sc];
				return (p);
			}
		}
	}
	return (0);
}
