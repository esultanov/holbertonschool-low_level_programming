#include <stdio.h>
/**
* main - prints size of types
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %li\n byte(s)", sizeof(char));
	printf("Size of an int: %li\n byte(s)", sizeof(int));
	printf("Size of a long int: %li\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %li\n byte(s)", sizeof(long long int));
	printf("Size of a float: %li\n byte(s)", sizeof(float));
	return (0);
}
