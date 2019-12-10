#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc: arguments count.
 * @argv: arguments array.
 * Return: 0. if error 1.
 */
int main(int argc, char *argv[])
{
	int coin, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	coin = 0;
	while (change >= 25)
	{
		coin++;
		change -= 25;
	}
	while (change > 0)
	{
		if (change >= 10)
		{
			coin++;
			change -= 10;
		}
		else if (change >= 5)
		{
			coin++;
			change -= 5;
		}
		else if (change >= 2)
		{
			coin++;
			change -= 2;
		}
		else if (change >= 1)
		{
			coin++;
			change -= 1;
		}
	}
	printf("%d\n", coin);
	return (0);
}
