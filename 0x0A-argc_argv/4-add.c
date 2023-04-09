#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc:argument count
 * @argv:argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
