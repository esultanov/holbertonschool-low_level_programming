#include "holberton.h"
/**
 * _strlen - swap two int.
 * @s: an integer from main.c.
 * Return: returns 0.
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
