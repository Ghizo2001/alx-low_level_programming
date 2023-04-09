#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = 5;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < num_denominations && cents > 0)
	{
		int num_coins = cents / denominations[i];

			coins += num_coins;
			cents -= num_coins * denominations[i];
			i++;
	}
	printf("%d\n", coins);
	return (0);
}
