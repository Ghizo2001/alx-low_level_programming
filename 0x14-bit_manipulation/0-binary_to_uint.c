#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing the binary number.
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
		{
			num <<= 1;
		}
		else if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
