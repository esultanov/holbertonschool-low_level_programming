#include "holberton.h"
/**
 * _strcat - concatenate string.
 * @dest: string.
 * @src: source string.
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
	int dst, sr;

	for (dst = 0; dest[dst] != '\0'; dst++)
		;
	for (sr = 0; src[sr] != '\0'; sr++)
	{
		dest[dst] = src[sr];
		dst++;
	}
	dest[dst] = '\0';

	return (dest);
}
