#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s \n", *argv++);
	}
	return (0);
}
