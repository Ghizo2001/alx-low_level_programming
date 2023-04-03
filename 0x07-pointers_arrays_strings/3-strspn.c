#include "main.h"
/**
 * _strspn - Returns the length of the initial segment of @s
 * which consists only of characters from @accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (0);
}
