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
	(void) argv;

	printf("%s\n", argc - 1);

	return (0);
}
