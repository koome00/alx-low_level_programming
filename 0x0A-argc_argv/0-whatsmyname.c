#include <stdio.h>
#include "main.h"
/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: returns 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
