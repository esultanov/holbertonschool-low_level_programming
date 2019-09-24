#include "holberton.h"

/**
 * main - main function.
 * _putchar - 10 times alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "Holberton";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
