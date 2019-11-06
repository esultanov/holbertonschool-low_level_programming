#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - key generator.
 *
 * Return: return 0.
 */
int main ()
{
	int i = 0, n = 0, end = 2772;
	time_t t;
	char arr[44];

	/* Intializes random number generator */
	srand((unsigned) time(&t));

	/* Print 5 random numbers from 0 to 50 */
	while (n != 2772)
	{
		for (;end > 0; i++)
		{
			arr[i] = rand() % 94 + 33;
			n = n + arr[i];
			end -= arr[i];
			if (end < 0)
			{
				arr[i] += end;
				n += end;
			}
		}
		arr[i] = '\0';
	}
	printf("%s\n", arr);
	return(0);
}
