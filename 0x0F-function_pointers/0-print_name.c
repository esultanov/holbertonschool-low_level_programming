#include "function_pointers.h"
/**
 * print_name - print name.
 * @name: is name.
 * @f: function pointer.
 * @s: string with name.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *s))
{
	f(name);
}
