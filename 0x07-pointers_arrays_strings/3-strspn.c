#include "holberton.h"
/**
 * _strspn - gets lenght of str.
 * @s: return number of bytes from s.
 * @accept: bytes consist.
 * Return: pointer to char.
 */

unsigned int _strspn(char *s, char *accept)
{
	int sc = 0;
	int cc = 0;
	int ac;

	while (s[sc] != '\0')
	{
		ac = 0;
		while (accept[ac] != '\0')
		{
			if (s[sc] == accept[ac])
			{
				cc++;
				break;
			}
			ac++;
		}
		if (accept[ac] == '\0')
			break;
		sc++;
	}
	return (cc);
}
