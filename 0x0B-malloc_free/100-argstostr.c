#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			total_len++;
	}

	total_len += ac + 1;

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		{
			str[j] = av[i][len];
			j++;
		}
		str[j] == '\0';
			j++;
	}
	str[j] = '\0';

	return (str);
}
