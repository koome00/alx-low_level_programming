#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: should count two arguments
 * @argv: arguments given should be program name and amount of money
 * Return: least number of coins, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int n, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	n = atoi(argv[1]);

	coin += n / 25;
	n = n % 25;
	coin += n / 10;
	n = n % 10;
	coin += n / 5;
	n = n % 5;
	coin += n / 2;
	n = n % 2;
	coin += n / 1;

	printf("%d\n", coin);
	return (0);
}
