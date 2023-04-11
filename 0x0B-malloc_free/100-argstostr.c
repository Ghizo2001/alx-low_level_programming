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
	int i, j, len, total_len = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			total_len++;
		total_len++;
	}
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		{
			str[j] = av[i][len];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}
