#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of command-line arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
