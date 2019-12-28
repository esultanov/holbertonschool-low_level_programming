#include <stdio.h>
/**
 * test - Print before the main function is executed.
 */
void __attribute__((constructor)) test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
