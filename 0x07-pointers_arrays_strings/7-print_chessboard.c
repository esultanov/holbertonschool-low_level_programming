#include "holberton.h"
/**
 * print_chessboard - gets lenght of str.
 * @a: return number of bytes from s.
 * Return: pointer to char.
 */

void print_chessboard(char (*a)[8])
{
	int v, h;

	for (v = 0; v < 8; v++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[v][h]);
		}
		_putchar('\n');
	}
}
