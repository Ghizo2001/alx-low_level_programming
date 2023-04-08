#include "main.h"
/**
 * _strpbrk - Find the first occurrence of any character in `accept` within `s`
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: Always 0(Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
				return (s);
		}
		s++;
	}
	return ('\0');
}
