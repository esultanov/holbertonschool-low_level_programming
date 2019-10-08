#include "holberton.h"
/**
 * _strstr - gets lenght of str.
 * @haystack: return number of bytes from s.
 * @needle: bytes consist.
 * Return: pointer to char.
 */

char *_strstr(char *haystack, char *needle)
{
	int sc;
	int ac;
	char *p;

	for (sc = 0; needle[sc] != '\0'; sc++)
	{
		for (ac = 0; haystack[ac] != '\0'; ac++)
		{
			if (needle[sc] == haystack[ac])
			{
				p = &needle[sc];
				return (p);
			}
		}
	}
	return (0);
}
