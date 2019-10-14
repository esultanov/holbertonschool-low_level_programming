#include "holberton.h"
#include <stdio.h>

/**
 * main - whats my name.
 * @argc: count.
 * @argv: arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv - 1);

	return (0);
}
